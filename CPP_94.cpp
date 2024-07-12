```cpp
int calculateScore(int values[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += values[i];
    }
    return sum;
}

int main() {
    int myValues[] = {127, 97, 8192};
    const int n = sizeof(myValues) / sizeof(myValues[0]);
    for (int i = 0; i < n; i++) {
        std::cout << "Value at index " << i << ": " << myValues[i] << std::endl;
    }
    int score = calculateScore(myValues, n);
    std::cout << "The score is: " << score << std::endl;

    assert(score == 1216);

    return 0;
}