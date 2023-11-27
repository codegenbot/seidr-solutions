#include <iostream>
#include <vector>

using namespace std;

vector<int> even_odd_count(int num){
    int evenCount = 0;
    int oddCount = 0;
    
    while(num != 0){
        int digit = abs(num % 10);
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
    return a == b;
} 

int main(){
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(1) , {0, 1}));
    assert (issame(even_odd_count(123) , {1, 2}));
    assert (issame(even_odd_count(2468642) , {7, 0}));
    assert (issame(even_odd_count(-2468642) , {7, 0}));
    assert (issame(even_odd_count(13579731) , {0, 9}));
    cout << "All test cases pass";
    
    return 0;
}