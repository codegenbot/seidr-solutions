int sum = 0;

for (int i = 1; i < digits.size(); i++) {
    if ((i % 2) == 0) {
        int doubled = digits[i] * 2;
        if (doubled > 9) {
            sum += doubled - 9;
        } else {
            sum += doubled;
        }
    } else {
        sum += digits[i];
    }
}

return sum;