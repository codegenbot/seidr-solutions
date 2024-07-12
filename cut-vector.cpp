int main() {
    vector<int> A;
    int n, a;
    while (cin >> a) {
        A.push_back(a);
    }

    int sum1 = 0, sum2 = accumulate(A.begin() + 1, A.end(), 0);
    for (int i = 0; i < A.size(); i++) {
        sum1 += A[i];
        sum2 -= A[i];
        if (sum1 == sum2 || abs(sum1 - sum2) < abs(2*(sum1 - A[i]) - sum2)) {
            for (int j = 0; j <= i; j++) {
                cout << A[j] << endl;
            }
            cout << "0" << endl;
            break;
        }
    }

    return 0;
}