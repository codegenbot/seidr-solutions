double diceGame(int n, int m) {
    double total = (double)n * m;
    double p = 0.0;

    for(int i = 1; i <= std::min((int) n, (int) m); i++) {
        for(int j = 1; j <= std::min((int) n, (int) m); j++) { 
            if(i > j) {
                p += (1.0 / n) * (1.0 / m);
            }
        }
    }

    return p;
}