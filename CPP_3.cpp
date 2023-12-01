#include <vector>

bool below_zero(vector<int> operations){
    int balance = 0; // initialize balance to zero
    
    for(int i = 0; i < operations.size(); i++){
        balance += operations[i]; // add the operation to the balance
        
        if(balance < 0){
            return true; // return true if balance falls below zero
        }
    }
    
    return false; // return false if balance never falls below zero
}