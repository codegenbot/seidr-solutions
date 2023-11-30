#include <iostream>
#include <vector>

using namespace std;

vector<int> even_odd_count(int num){
    int evenCount = 0;
    int oddCount = 0;
    string numStr = to_string(abs(num));
    
    for(char digit : numStr){
        int digitValue = digit - '0';
        if(digitValue % 2 == 0){
            evenCount++;
        }else{
            oddCount++;
        }
    }
    
    return {evenCount, oddCount};
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main(){
    assert(issame(even_odd_count(0), {1, 0}));
    assert(issame(even_odd_count(12345), {3, 2}));
    assert(issame(even_odd_count(-9876), {2, 2}));

    cout << "All test cases passed" << endl;
    return 0;
}