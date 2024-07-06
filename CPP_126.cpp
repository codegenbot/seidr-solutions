#include <vector>
using namespace std;

bool is_sorted(vector<int> lst){
    bool sorted = true;
    vector<int> temp;
    for(int i = 0; i < lst.size(); i++){
        if(i == 0 || lst[i] >= lst[i-1]){
            temp.push_back(lst[i]);
        } else {
            sorted = false;
        }
    }
    return sorted;
}