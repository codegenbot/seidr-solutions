#include<vector>
using namespace std;

bool is_sorted(vector<int> lst){
    bool isSorted = true;
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            isSorted = false;
            break;
        }
    }
    return isSorted;
}

int main(){
    vector<int> lst = {5,4,3,2,1};
    cout << (is_sorted(lst) ? "The list is sorted" : "The list is not sorted");
    return 0;
}