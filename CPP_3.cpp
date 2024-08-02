bool below_zero(vector<int> operations){
    int balance = 0;
    for(int i = 0; i < operations.size(); i++){
        if(operations[i] > 0) {
            balance += operations[i];
        } else if(operations[i] < 0) {
            balance -= abs(operations[i]);
            if(balance < 0)
                return true;
        }
    }
    return false;
}