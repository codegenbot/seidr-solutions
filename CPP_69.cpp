#include<vector>
#include<algorithm>
using namespace std;

int search(vector<int> lst) {
    sort(lst.begin(), lst.end());
    
    for (int i = lst.size() - 1; i >= 0; --i) {
        if (lst[i] > 0 && count(lst.begin(), lst.end(), lst[i]) >= lst[i]) {
            return lst[i];
        }
    }
    
    return -1;
}