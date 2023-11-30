vector<int> sort_vector(vector<int> arr) {
    sort(arr.begin(), arr.end(), [](int a, int b) {
        int countA = 0, countB = 0;
        for (int i = 0; i < sizeof(int) * 8; i++) {
            if ((a >> i) & 1) countA++;
            if ((b >> i) & 1) countB++;
        }
        if (countA == countB) {
            return a < b;
        }
        return countA < countB;
    });
    return arr;
}