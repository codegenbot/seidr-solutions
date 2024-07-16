double diceGame(int n, int m) {
    double total = (n + m - 1);
    if(m > 1) 
        return 1.0 * (m - 1) / total;
    else
        return 1.0;