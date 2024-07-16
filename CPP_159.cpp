vector<int> eat(int number, int need, int remaining){
        int totalEaten = number + min(need, remaining);
        int leftCarrots = max(0, remaining - need);
        return {totalEaten, leftCarrots};
    }