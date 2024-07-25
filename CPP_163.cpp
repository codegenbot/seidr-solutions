vector<int> evenDigits;
    for (int i = a; i <= b; ++i) {
        if (i % 2 == 0) {
            evenDigits.push_back(i);
        }
    }
    return evenDigits;