#include <vector>

bool is_sorted(vector<int> lst){
    int n = lst.size();
    if(n <= 1)
        return true;
    
    for(int i = 1; i < n; i++){
        if(lst[i] <= lst[i-1])
            return false;
    }
    
    return true;
}

int main() {
    vector<int> lst = {1, 2, 3, 4};
    if(is_sorted(lst)){
        cout << "The vector is sorted." << endl;
    }else{
        cout << "The vector is not sorted." << endl;
    }
    
    return 0;
}