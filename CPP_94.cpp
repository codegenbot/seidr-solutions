int main() {
    int myValues[] = {127, 97, 8192};
    const int n = sizeof(myValues) / sizeof(myValues[0]);
    for (int i = 0; i < n; i++) {
        cout << "Value at index " << i << ": " << myValues[i] << endl;
    }
    cout << "The score is: " << calculateScore(myValues, n) << endl;
    return 0;
}