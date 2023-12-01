#include <vector>

bool issame(vector<int> a, vector<int> b){
    // Function logic
}

vector<int> even_odd_count(int num){
    int evenCount = 0;
    int oddCount = 0;
    int digit;
    
    while(num != 0){
        digit = abs(num % 10);
        if(digit % 2 == 0){
            evenCount++;
        }
        else{
            oddCount++;
        }
        num /= 10;
    }
    
    vector<int> result = {evenCount, oddCount};
    return result;
}

int main(){
    assert(issame(even_odd_count(0), {1, 0}));
}