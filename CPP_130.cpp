vector<int> tri(int n){
    vector<int> result;
    result.push_back(3);

    if (n == 0) {
        return result;
    }

    if (n == 1) {
        result.push_back(0);
        return result;
    }

    int a = 3, b = 1, c = 0;

    for (int i = 3; i <= n; i++) {
        int temp = 0;
        if (i % 2 == 0) {
            temp = 1 + i / 2;
        } else {
            temp = a + b + c;
        }
        a = b;
        b = c;
        c = temp;
        result.push_back(temp);
    }

    return result;
}