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
    vector<int> vec = {5, 3, 8};
    vector<int> sorted_vec = strange_sort_vector(vec);
    for(int num : sorted_vec) {
        cout << num << " ";
    }
    return 0;
}