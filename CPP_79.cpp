string decimal_to_binary(int decimal){
    string binary = "";
    while(decimal > 0) {
        int remainder = decimal % 2;
        if(remainder == 1)
            binary.insert(0,"1");
        else
            binary.insert(0,"0");
        decimal /= 2;
    }
    return "db" + binary + "db";
}

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;
    string result = decimal_to_binary(num);
    cout << "Binary representation of the input number is: " << result << endl;
    return 0;
}