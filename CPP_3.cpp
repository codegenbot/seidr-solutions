int current_balance = 0;
for (int op : operations) {
    current_balance += op;
    if (current_balance < 0) {
        return true;
    }
}
return false;