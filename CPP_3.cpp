bool below_zero(vector<int> operations){
    int balance = 0;
    for(auto op : operations){
        balance += op;
        if(balance < 0){
            return true;
        }
    }
    return false;
}