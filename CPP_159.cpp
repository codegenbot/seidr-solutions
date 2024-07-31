vector<int> eat(int number, int need, int remaining) {
        int totalCarrotsEaten = number + remaining;
        int carrotsLeft = max(0, need - remaining);
        return {totalCarrotsEaten, carrotsLeft};
    }