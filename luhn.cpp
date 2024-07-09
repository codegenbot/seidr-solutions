int luhn(int numbers[]) {
    long long sum = 0;
    for (int i = 0; i < 16; i++) {
        int digit = numbers[i];
        if ((i % 2 == 1)) {
            digit *= 2;
            if (digit > 9)
                digit -= 9;
        }
        sum += digit;
    }
    long long result = 0;
    while(sum > 0) {
        int temp = sum % 10;
        if(temp * 2 > 9)
            temp = temp*2 - 9;
        else
            temp *= 2;
        result += temp;
        sum /= 10;
    }
    return static_cast<int>(result);
}

int main() {
    return luhn({4,2,8,6,2,1,1,7,9,3,5,1,4,3,9,0});
}