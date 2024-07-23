#include <iostream>
#include <vector>
using namespace std;

bool is_sorted(vector<int> lst){
    if(lst.size() <= 1) return true;
    for(int i = 1; i < lst.size(); i++){
        if(lst[i-1] >= lst[i]) return false;
    }
    vector<int>::iterator it = unique(lst.begin(), lst.end());
    lst.erase(it, lst.end());
    return lst.size() == 1 || (lst[0] < lst[1]);
}

int main(){
    int n;
    cin >> n;
    vector<int> lst(n);
    for(int i = 0; i < n; i++){
        cin >> lst[i];
    }
    
    if(is_sorted(lst)){
        cout << "Sorted" << endl;
    }else{
        cout << "Not Sorted" << endl;
    }
    
    return 0;
}