int main() {
    using namespace std;

    vector<int> cardNumber = {insert your 16-digit card number};
    int result = luhnCheck(cardNumber);

    cout << "The result is: " << result << endl;
    return 0;
}