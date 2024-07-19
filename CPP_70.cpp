#include <vector>
#include <algorithm>

bool issame(int a, int b);

vector<int> strange_sort_list(vector<int> lst);

bool issame(int a, int b){
    return a == b;
}

vector<int> strange_sort_list(vector<int> lst){
    sort(lst.begin(), lst.end(), [](int a, int b){
        return issame(a%10, b%10) ? a < b : a%10 < b%10;
    });
    vector<int> result;
    int left = 0, right = lst.size() - 1;
    while (left <= right) {
        if (left == right) {
            result.push_back(lst[left]);
            break;
        }
        result.push_back(lst[left]);
        result.push_back(lst[right]);
        left++;
        right--;
    }
    return result;
}

int main() {
    vector<int> test_lst = {111111};
    vector<int> sorted_lst = strange_sort_list(test_lst);
    assert(sorted_lst == test_lst);
    return 0;
}