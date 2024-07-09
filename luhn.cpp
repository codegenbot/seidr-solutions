int main() {
    vector<int> cardNumber = {4, 5, 3, 9, 2, 6, 5, 3, 8, 7, 1, 0, 2, 8, 8, 4};
    int sum = luhnAlgorithm(cardNumber);
    return sum;
}