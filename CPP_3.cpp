#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool below_zero(vector<int> operations){
    int balance = 0;
    
    for(int i=0; i<operations.size(); i++){
        balance += operations[i];
        
        if(balance < 0){
            return true;
        }
    }
    
    return false;
}

int main() {
    cout << below_zero({1, -2, 2, -2, 5, -5, 4, -4}) << endl;
    return 0;
}