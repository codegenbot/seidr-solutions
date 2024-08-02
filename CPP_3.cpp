bool below_zero(vector<int> operations){
    int balance = 0;
    for(int i = 0; i < operations.size(); i++){
        if(i % 2 == 1) {
            balance += operations[i];
        } else {
            balance -= operations[i];
        }
        if(balance < 0) return true;
    }
    return false;
}