#include <vector>
#include <algorithm>
#include <cassert>

bool issame(vector<int> a, vector<int> b) {
    // function body
}

vector<int> strange_sort_list(vector<int> lst){
    vector<int> result;
    sort(lst.begin(), lst.end());
    int i = 0, j = lst.size() - 1;
    while (i <= j) {
        result.push_back(lst[i]);
        if (i != j) {
            result.push_back(lst[j]);
        }
        i++;
        j--;
    }
    return result;
}

int main() {
    // main function code goes here (not provided in the task description)
}