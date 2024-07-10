int luhn(std::vector<int> v) {
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        if ((i % 2) == 1) {
            v[i] *= 2;
            if (v[i] > 9)
                v[i] -= 9;
        }
    }
    for (int i = 0; i < v.size(); i++)
        sum += v[i];
    return sum;
}