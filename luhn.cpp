if (i % 2 != 0) {
    int doubled = digits[i] * 2;
    sum += (doubled > 9) ? doubled - 9 : doubled;
} else {
    sum += digits[i];
}