vector<int> result;
    if (n >= 0) {
        result.push_back(3);
        int a = 0, b = 0, c = 3;
        for (int i = 1; i <= n; ++i) {
            result.push_back(c);
            if (i % 2 == 0) {
                c = 1 + i / 2;
            } else {
                int temp = c;
                c = a + b + c;
                a = b;
                b = temp;
            }
        }
    }
    return result;
}