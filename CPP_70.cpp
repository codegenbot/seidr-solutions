#include <algorithm>
#include <cassert>
#include <vector>

bool issame(int a, int b) {
    return a == b;
}

vector<int> strange_sort_list(vector<int> lst){
    sort(lst.begin(), lst.end(), issame);
    vector<int> result;
    int left = 0, right = lst.size() - 1;
    while (left <= right) {
        result.push_back(lst[left++]);
        if (left <= right) {
            result.push_back(lst[right--]);
        }
    }
    return result;
}

int main() {
    assert(strange_sort_list({111111}) == vector<int>{111111});
    return 0;
}