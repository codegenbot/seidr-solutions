int decimalToBinary(int n) {
    string binary = "";
    while(n > 0){
        if(n % 2 == 0) binary.push_back('0');
        else binary.push_back('1');
        n /= 2;
    }
    string result = "db" + binary + "db";
    return result;