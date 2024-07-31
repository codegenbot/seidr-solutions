int main() {
    int result = skjkasdkd({127, 97, 8192});
    if(result == -1) {
        cout << "Error: Invalid input. Please provide a list of integers." << endl;
    } else {
        cout << "The sum of the digits is: " << result << endl;
    }
    return 0;
}