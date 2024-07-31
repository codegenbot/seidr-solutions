std::string decimal_to_binary(int n) {
    std::string binary = "";
    while (n > 0) {
        if (n % 2 == 0)
            binary.push_back('0');
        else
            binary.push_back('1');
        n /= 2;
    }
    return "db" + binary + "b";
}