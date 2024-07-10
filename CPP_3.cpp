int balance = 0;
for (int i = 0; i < operations.size(); i++) {
    balance += operations[i];
    if (balance < 0) {
        return true;
    }
}
return false;