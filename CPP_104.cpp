#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<int> unique_digits(vector<int> x);

int main(){
    vector<int> x = {123, 456, 789};
    vector<int> result = unique_digits(x);
    for(int i=0; i<result.size(); i++){
        cout << result[i] << " ";
    }
    return 0;
}

vector<int> unique_digits(vector<int> x){
    vector<int> result;
    for(int i=0; i<x.size(); i++){
        int num = x[i];
        bool hasEvenDigit = false;
        while(num > 0){
            int digit = num % 10;
            if(digit % 2 == 0){
                hasEvenDigit = true;
                break;
            }
            num /= 10;
        }
        if(!hasEvenDigit){
            result.push_back(x[i]);
        }
    }
    sort(result.begin(), result.end());
    return result;
}