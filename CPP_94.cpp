int main() {
    int result = skjkasdkd({127, 97, 8192});
    if(result == -1) {
        cout << "Error: Input vector is empty." << endl;
    } else {
        cout << "The sum of the digits in the largest prime number is: " << result << endl;
    }
    return 0;
}