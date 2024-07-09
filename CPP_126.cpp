#include <vector>
using namespace std;

bool is_sorted(vector<int> lst);

int main(){
    assert (is_sorted({1, 2, 3, 4}) == true);
}

bool is_sorted(vector<int> lst){
    if(lst.size() <= 1) return true;
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            vector<int> temp;
            bool duplicate = false;
            for(int j = 0; j < i; j++){
                if(temp.empty() || temp.back() != lst[j]){
                    temp.push_back(lst[j]);
                } else {
                    duplicate = true;
                    break;
                }
            }
            if(!duplicate) return false;
        } else {
            return false;
        }
    }
    return true;
}