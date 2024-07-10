for (int i = n - 1; i >= 0; i -= 2) {
    int doubled = digits[i] * 2;
    sum += (doubled > 9) ? (doubled - 9) : doubled;
}

for (int i = n - 2; i >= 0; i -= 2) {
    sum += digits[i];
}