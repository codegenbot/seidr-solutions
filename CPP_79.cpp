string decimal_to_binary(int decimal){
    string binary = "";
    while (decimal > 0) {
        if (decimal % 2 == 0)
            binary.insert(0, "0");
        else
            binary.insert(0, "1");
        decimal /= 2;
    }
    return "db" + binary + "db";
}

int main() {
    int input;
    cout << "Enter a decimal number: ";
    cin >> input;
    cout << "Binary representation is: " << decimal_to_binary(input) << endl;
    return 0;
}