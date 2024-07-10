```cpp
#include <vector>
using namespace std;

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i-1] > lst[i]){
            return false;
        }
        else{
            bool found = false;
            for (int j = 0; j < i; j++) {
                if (lst[j] == lst[i]) {
                    found = true;
                    break;
                }
            }
            if(found){
                return false;
            }
        }
    }
    return true;

int main() {
    vector<int> lst = {1, 2, 3, 4};
    assert(is_sorted(lst) == true);
}