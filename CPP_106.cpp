#include <vector>

bool issame(vector<int> arr1, vector<int> arr2){
    if(arr1.size() != arr2.size()){
        return false;
    }
    
    for(int i = 0; i < arr1.size(); i++){
        if(arr1[i] != arr2[i]){
            return false;
        }
    }
    
    return true;
}

vector<int> f(int n){
    vector<int> result(n);
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            int fact = 1;
            for(int j = 1; j <= i; j++){
                fact *= j;
            }
            result[i] = fact;
        } else {
            int sum = 0;
            for(int j = 1; j <= i; j++){
                sum += j;
            }
            result[i] = sum;
        }
    }
    return result;
}

int main(){
    vector<int> arr1 = f(5);
    vector<int> arr2 = {0, 1, 2, 6, 15};
    
    if(issame(arr1, arr2)){
        cout << "Arrays are the same" << endl;
    } else {
        cout << "Arrays are different" << endl;
    }
    
    return 0;
}