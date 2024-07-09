bool hasEvenDigit(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0)
            return true;
        num /= 10;
    }
    return false;
}

int main() {
    vector<int> lst;
    for (int i = 1; i <= 100; ++i) {
        lst.push_back(i);
    }
    cout << skjkasdkd(lst);
}