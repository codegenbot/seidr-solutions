#include <vector>
#include <algorithm>

using namespace std;

vector<int> strange_sort_list(vector<int> lst) {
    sort(lst.begin(), lst.end());
    int n = lst.size();
    vector<int> result(n);
    int i = 0, j = n - 1;
    int index = 0;
    while (i <= j) {
        result[index++] = lst[i++];
        if (i <= j) {
            result[index++] = lst[j--];
        }
    }
    return result;
}

int main() {
    assert (strange_sort_list({111111}) == vector<int>({111111}));
    assert (strange_sort_list({3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5}) == vector<int>({1, 9, 1, 6, 2, 5, 3, 5, 3, 4, 5}));
    assert (strange_sort_list({2, 4, 6, 8, 10}) == vector<int>({2, 10, 4, 8, 6}));
    return 0;
}