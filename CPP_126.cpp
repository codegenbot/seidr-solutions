#include <vector>
using namespace std;

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            return false;
        }
    }
    vector.unique(lst.begin(), lst.end());
    lst.erase(unique(lst.begin(), lst.end()), lst.end());
    return true;
}