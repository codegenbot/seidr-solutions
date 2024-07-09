int luhn(int* numbers) {
    long long sum = 0;
    bool isSecond = false; 
    for (int i = 0; i < 16; i++) {
        int digit = numbers[i];
        if ((i % 2 == 1)) {
            isSecond = true; 
        } else {
            isSecond = false;
        }
        if (isSecond) {
            digit *= 2;
            if (digit > 9)
                digit -= 9;
        }
        sum += digit;
    }
    return static_cast<int>(sum);
}

int main() {
    int numbers[] = {4,2,8,6,2,1,1,7,9,3,5,1,4,3,9,0};
    return luhn(numbers);
}