#include <vector>
#include <cassert>

vector<int> even_odd_count(int num);

bool issame(vector<int> a, vector<int> b){
    return (a[0] == b[0]) && (a[1] == b[1]);
}

int main() {
    vector<int> result = even_odd_count(1234567890);
    assert(issame(result, {5, 5}));

    result = even_odd_count(246810);
    assert(issame(result, {6, 0}));

    result = even_odd_count(-13579);
    assert(issame(result, {0, 5}));

    return 0;
}

vector<int> even_odd_count(int num){
    int evenCount = 0;
    int oddCount = 0;
    int digit;
    
    num = abs(num);
    
    while(num > 0){
        digit = num % 10;
        
        if(digit % 2 == 0){
            evenCount++;
        } else {
            oddCount++;
        }
        
        num = num / 10;
    }
    
    vector<int> result = {evenCount, oddCount};
    return result;
}