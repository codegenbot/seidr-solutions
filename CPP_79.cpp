Here is the solution:

string decimal_to_binary(int decimal){
    string binary = "";
    while (decimal > 0) {
        if (decimal % 2 == 1)
            binary.push_back('1');
        else
            binary.push_back('0');
        decimal /= 2;
    }
    return "db" + binary + "db";
}