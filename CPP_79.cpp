string decimal_to_binary(int n) {
    string binary = "";
    while(n > 0){
        if (n % 2 == 0)
            binary = "0" + binary;
        else
            binary = "1" + binary;
        n /= 2;
    }
    return binary;
}

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    string result = decimal_to_binary(decimal);
    cout << "The binary representation of " << decimal << " is " << result << endl;
    return 0;
}