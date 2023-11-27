vector<int> eat(int number, int need, int remaining) {
    vector<int> result;
    int totalEaten = number + remaining;
    int carrotsLeft = 0;
    
    if (totalEaten >= need) {
        carrotsLeft = totalEaten - need;
    }
    
    result.push_back(totalEaten);
    result.push_back(carrotsLeft);
    
    return result;
}