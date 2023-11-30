bool below_zero(vector<int> operations){
    int balance = 0; // initialize balance to zero
    
    for(int i=0; i<operations.size(); i++){
        balance += operations[i]; // add the current operation amount to the balance
        
        if(balance < 0){ // check if the balance falls below zero
            return true; // return true if balance falls below zero
        }
    }
    
    return false; // return false if balance never falls below zero
}