#include <iostream>
#include <vector>

using namespace std;

vector<int> even_odd_count(int num){
    int evenCount = 0;
    int oddCount = 0;
    string numStr = to_string(abs(num));
    
    for(char c : numStr){
        int digit = c - '0';
        if(digit % 2 == 0){
            evenCount++;
        } else {
            oddCount++;
        }
    }
    
    return {evenCount, oddCount};
}

int main(){
    vector<int> result = even_odd_count(1234567);
    for(int count : result){
        cout << count << " ";
    }
    
    return 0;
}