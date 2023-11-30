bool below_zero(vector<int> operations){
    int balance = 0; // initialize balance to zero
    for(int i = 0; i < operations.size(); i++){ // iterate through the vector of operations
        balance += operations[i]; // add current operation to balance
        if(balance < 0){ // if balance falls below zero
            return true; // return true
        }
    }
    return false; // if balance never falls below zero, return false
}