int balance = 0;
    for (int operation : operations) {
        balance += operation;
        if (balance < 0) {
            return true;
        }
    }
    return false;
}