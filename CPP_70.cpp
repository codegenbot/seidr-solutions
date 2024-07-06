```
#include <vector>
#include <algorithm>

using namespace std;

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    sort(lst.begin(), lst.end());
    while (!lst.empty()) {
        result.push_back(*lst.begin());
        lst.erase(lst.begin());
        if (!lst.empty())
            sort(lst.begin(), lst.end());
    }

    return result;
}

int main() {
    vector<int> input = {4, 2, 9, 6, 5, 1, 3, 7, 8};
    vector<int> output = strange_sort_vector(input);
    for (int num : output) {
        cout << num << " ";
    }
    return 0;
}