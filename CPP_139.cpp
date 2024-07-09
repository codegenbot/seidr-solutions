std::string special_factorial(int n) {
    if (n <= 1)
        std::string result = "1";

    std::string result = "1";
    for (int i = 2; i <= n; i++) {
        long long mul_result = 1;
        for (int j = 2; j <= i; j++)
            mul_result *= j;

        if(i > 1)
            result += " * " + std::to_string(mul_result);
    }
    return result;
}