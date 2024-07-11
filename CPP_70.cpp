#include <algorithm>
#include <vector>

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
    vector<int> sortedNumbers = strange_sort_vector(numbers);
    for(int i : sortedNumbers) {
        cout << i << endl;
    }
    return 0;
}