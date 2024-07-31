#include <vector>
using namespace std;

bool issame(vector<int> a, vector<int> b){
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> strange_sort_list(vector<int> lst){
        vector<int> result;
        sort(lst.begin(), lst.end());
        int left = 0, right = lst.size() - 1;
        while (left <= right) {
            result.push_back(lst[left++]);
            if (left <= right) {
                result.push_back(lst[right--]);
            }
        }
        return result;
    }
}