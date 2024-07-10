```cpp
#include <vector>
using namespace std;

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i-1] > lst[i]){
            return false;
        }
        else {
            for(auto j = 0; j < lst.size(); j++){
                if(j != i && lst[j] == lst[i])return false;
            }
        }
    }
    return true;

int main {
    vector<int> lst = {1, 2, 3, 4};
    cout << (is_sorted(lst) ? "True" : "False") << endl;
}