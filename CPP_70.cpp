#include <vector>
#include <algorithm>

using namespace std;

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    sort(lst.begin(), lst.end());
    int left = 0;
    int right = lst.size() - 1;
    while (left < right) {
        result.push_back(lst[left]);
        result.push_back(lst[right]);
        left++;
        right--;
    }
    if (left == right) {
        result.push_back(lst[left]);
    }
    return result;
}

int main() {
    assert(strange_sort_vector({111111}) == vector<int>{111111});
    // Add more test cases here

    return 0;
}