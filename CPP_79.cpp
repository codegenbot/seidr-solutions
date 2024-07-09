string decimal_to_binary(int n) {
    string res = "";
    while(n > 0) {
        if (n % 2 == 0)
            res = "0" + res;
        else
            res = "1" + res;
        n /= 2;
    }
    return res;
}

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    cout << "The binary representation is: " << decimal_to_binary(decimal) << endl;
    return 0;
}