string decimal_to_binary(int n){
    string binary = "";
    while(n > 0) {
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
    cin >> decimal;
    cout << decimal_to_binary(decimal) << endl;
    return 0;
}