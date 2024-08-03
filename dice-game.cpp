int main(){
    double diceGame(int n, int m) {
        double total = (double)n * m;
        double count = 0;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j < i && j <= m; j++) {
                count++;
            }
        }

        return count / total;
    }
    return 0;
}