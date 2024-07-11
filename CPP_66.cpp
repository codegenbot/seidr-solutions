int sum = 0;
    for (char c : s) {
        if (c >= 'A' && c <= 'Z') {
            sum += static_cast<int>(c);
        }
    }
    return sum;
}