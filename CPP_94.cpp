int main {
    int myValues[] = {127, 97, 8192};
    const int n = sizeof(myValues) / sizeof(myValues[0]);
    for (int i = 0; i < n; i++) {
        std::cout << "Value at index " << i << ": ";
        std::cout << myValues[i] << std::endl;
    }
    std::cout << "The score is: " << calculateScore(myValues, n) << std::endl;
    assert(calculateScore(myValues, n) == 1224); 
    return 0;
}