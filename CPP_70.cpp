#include <algorithm>
#include <vector>

bool issame(vector<int> a, vector<int> b);

vector<int> strange_sort_list(vector<int> lst);

int main() {
    // Example usage of the strange_sort_list function
    vector<int> input = {3, 1, 4, 1, 5, 9};
    vector<int> result = strange_sort_list(input);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}

vector<int> strange_sort_list(vector<int> lst){
    vector<int> result;
    sort(lst.begin(), lst.end());
    int i = 0, j = lst.size() - 1;
    while (i <= j) {
        result.push_back(lst[i++]);
        if (i <= j) {
            result.push_back(lst[j--]);
        }
    }
    return result;
}