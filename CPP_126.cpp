#include <vector>
using namespace std;

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i-1] > lst[i]){
            return false;
        }
        else{
            auto it = lst.begin();
            while(it != lst.end()){
                if(*it == lst[i]) break;
                it++;
            }
            if(it == lst.end()) continue;
            for(auto j = it + 1; j != lst.end(); j++){
                if(*j == *it) return false;
            }
        }
    }
    return true;

int main {
    vector<int> lst = {1, 2, 3, 4};
    cout << is_sorted(lst) << endl;
}