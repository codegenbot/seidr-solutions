bool below_zero(vector<int> operations){
    int balance = 0;
    for(int i:operations){
        if(balance < 0) return true;
        balance += i;
    }
    return false;
}