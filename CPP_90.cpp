#include <vector>
#include <algorithm>

int next_smallest(vector<int> lst) {
    if (lst.empty()) return -1;
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for (int i = 1; i < sorted.size(); i++) {
        if (sorted[i] != sorted[0]) {
            int result = *std::find_if(lst.begin(), lst.end(),
                [val](int x) { return x == sorted[i]; });
            return result;
        }
    }
    return -1;
}

int main() {
    // Your code to test the function
    vector<int> numbers = {3, 2, 5, 4};
    int smallest = next_smallest(numbers);
    if (smallest != -1) {
        cout << "The next smallest number is: " << smallest << endl;
    } else {
        cout << "No smaller number found." << endl;
    }
    return 0;
}