vector<int> result;
    if (n >= 0) {
        result.push_back(3);
        int a = 1, b = 3, c = 2;
        for (int i = 1; i <= n; ++i) {
            result.push_back(a);
            int temp = (i % 2 == 0) ? (1 + i / 2) : (a + b + c);
            a = b;
            b = c;
            c = temp;
        }
    }
    return result;
}