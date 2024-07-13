```cpp
int diceGame(int n, int m) {
    double probability = 0;
    for (int i = m + 1; i <= n; i++) {
        probability += 1.0 / n;
    }
    return static_cast<int>(probability);
}

int main() { return diceGame(6, 6); }