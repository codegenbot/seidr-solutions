#include <vector>
#include <algorithm>

int next_smallest(vector<int> lst) {
    if (lst.empty()) return -1; 
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for (int i = 1; i < sorted.size(); i++) {
        if (sorted[i] != sorted[0]) {
            auto it = std::find_if(lst.begin(), lst.end(),
                [val](int x) { return x == sorted[i]; });
            return *it;
        }
    }
    return -1; 
}

int main() {
    // Test the function
    vector<int> lst = {5, 2, 8, 10};
    int result = next_smallest(lst);
    if (result != -1) {
        cout << "The smallest number greater than all others is: " << result << endl;
    } else {
        cout << "No such number exists." << endl;
    }
    return 0;
}