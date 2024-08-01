int luhn(vector<int>& cardNum) {
    int sum = 0;
    for (int i = 0; i < cardNum.size(); i++) {
        if ((i % 2) == 1) {
            int temp = cardNum[i] * 2;
            if (temp > 9)
                temp -= 9;
            sum += temp;
        } else
            sum += cardNum[i];
    }
    return sum;
}

int main() {
    int n, num;
    vector<int> cardNum(16);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        cardNum[i] = num;
    }
    cout << luhn(cardNum) << endl;
    return 0;
}