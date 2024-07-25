vector<int> even_digits;
    for (int i = a; i <= b; ++i) {
        if (i % 2 == 0) {
            even_digits.push_back(i);
        }
    }
    return even_digits;