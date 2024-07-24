string decimal_to_binary(int decimal){
    string binary = "";
    while(decimal > 0) {
        if (decimal % 2 == 0)
            binary = "0" + binary;
        else
            binary = "1" + binary;
        decimal /= 2;
    }
    return "db" + binary + "db";
}

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    string binary = decimal_to_binary(decimal);
    cout << "The binary representation of the decimal number is " << binary << endl;
    return 0;
}