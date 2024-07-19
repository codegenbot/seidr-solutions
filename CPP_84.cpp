int sumDigitsInBinary(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 2;
        num /= 2;
    }
    return sum;
}

string solve(int N) {
    int sum = sumDigitsInBinary(N);
    string result = "";
    while (sum > 0) {
        result = to_string(sum % 2) + result;
        sum /= 2;
    }
    return result == "" ? "0" : result;
}