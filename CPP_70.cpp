```
#include <algorithm>
using namespace std;

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        int max_val = *max_element(lst.begin(), lst.end());
        
        if (min_val == max_val) {
            result.push_back(min_val);
            lst.erase(remove(lst.begin(), lst.end(), min_val), lst.end());
        } else {
            result.push_back(min_val);
            vector<int> new_lst;
            for (int x : lst) {
                if (x != min_val) {
                    new_lst.push_back(x);
                }
            }
            lst = new_lst;
        }
    }
    
    return result;
}

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    vector<int> sortedVec = strange_sort_vector(vec);
    for (int x : sortedVec) {
        cout << x << " ";
    }
    return 0;
}