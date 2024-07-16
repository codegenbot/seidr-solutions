int luhn(std::vector<int> digits) {
    int sum = 0;
    for (int i = 1; i < digits.size(); i++) {
        if ((i % 2 == 0)) { 
            int temp = digits[i] * 2;
            if (temp > 9)
                sum += temp - 9;
            else
                sum += temp;
        } else {
            sum += digits[i];
        }
    }
    return sum;

}

int main() {
    std::vector<int> digits = {7,9,6,8,1,9,4,6,1,4,5,9,5,7,9,8};
    int result = luhn(digits);
    return 0;
}