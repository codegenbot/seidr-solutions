#include <vector>
#include <cassert>

vector<int> even_odd_count(int num){
    int evenCount = 0;
    int oddCount = 0;
    string numStr = to_string(abs(num));
    
    for(int i = 0; i < numStr.length(); i++){
        int digit = numStr[i] - '0';
        if(digit % 2 == 0){
            evenCount++;
        } else {
            oddCount++;
        }
    }
    
    return {evenCount, oddCount};
}

bool issame(vector<int> a, vector<int> b){
    return (a == b);
}

int main(){
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(45328) , {3, 2}));
    assert (issame(even_odd_count(-654321) , {3, 4}));
    
    return 0;
}