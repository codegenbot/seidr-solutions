#include <vector>

vector<int> even_odd_count(int num){
    int evenCount = 0;
    int oddCount = 0;
    int digit;
    
    while(num != 0){
        digit = abs(num % 10);
        if(digit % 2 == 0){
            evenCount++;
        } else {
            oddCount++;
        }
        num /= 10;
    }
    
    vector<int> result = {evenCount, oddCount};
    return result;
}

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}

int main(){
    assert(issame(even_odd_count(0), {1, 0}));
    assert(issame(even_odd_count(2468), {4, 0}));
    assert(issame(even_odd_count(13579), {0, 5}));
    assert(issame(even_odd_count(1234567890), {5, 5}));
    
    return 0;
}