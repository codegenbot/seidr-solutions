int current_balance = 0;
for (int operation : operations) {
    current_balance += operation;
    if (current_balance < 0) {
        return true;
    }
}
return false;
}