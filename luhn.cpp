int luhn(const int& num[], int n) {
    int sum = 0;
    bool isSecond = false; 
    for (auto i = n - 1; i >= 0; --i) {
        if (isSecond) { 
            int temp = num[i] * 2;
            if (temp > 9) {
                temp -= 9;
            }
            sum += temp;
        } else { 
            sum += num[i];
        }
        isSecond = !isSecond; 
    }
    return sum;
}

int main() {
    int digits[] = {4,3,2,1,8,7,6,5,4,3,2,1};
    cout << luhn(digits, sizeof(digits) / sizeof(digits[0])) << endl; 
    return 0;
}