vector<int> result;
    if (n == 0) {
        result.push_back(0);
    } else if (n == 1) {
        result.push_back(3);
    } else if (n == 2) {
        result.push_back(1);
        result.push_back(3);
    } else {
        result.push_back(1);
        result.push_back(3);
        result.push_back(2);
        int a = 1, b = 3, c = 2;
        for (int i = 3; i <= n; ++i) {
            if (i % 2 == 0) {
                int temp = 1 + i / 2;
                result.push_back(temp);
                a = b;
                b = c;
                c = temp;
            } else {
                int temp = a + b + c;
                result.push_back(temp);
                a = b;
                b = c;
                c = temp;
            }
        }
    }
    return result;
}