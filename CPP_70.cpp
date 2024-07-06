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
    vector<int> numbers = {1, 3, 2, 4};
    vector<int> sorted_numbers = strange_sort_vector(numbers);
    for (int num : sorted_numbers) {
        cout << num << " ";
    }
    return 0;
}