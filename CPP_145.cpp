vector<int> issame(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end(), [](int a, int b) {
        int sumA = 0, sumB = 0;
        int tempA = abs(a), tempB = abs(b);
        while (tempA > 0) {
            sumA += tempA % 10;
            tempA /= 10;
        }
        while (tempB > 0) {
            sumB += tempB % 10;
            tempB /= 10;
        }
        if (sumA == sumB) {
            return a < b;
        }
        return sumA < sumB;
    });
    return a;
}

int main() {
    vector<int> result = issame({0, 6, 6, -76, -21, 23, 4}, {-76, -21, 0, 4, 23, 6, 6});
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}