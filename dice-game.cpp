```cpp
double diceGame(int n, int m) {
    double totalPossibilities = n * m;
    double winningRolls = (m - 1.0);
    
    for(int i = 2; i < n; i++) {
        winningRolls += i;
    }
    
    return winningRolls / totalPossibilities;
}