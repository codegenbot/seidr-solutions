int main() {
    vector<int> numbers;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        numbers.push_back(num);
    }
    using namespace std;

    int sum = 0;
    for (int num : numbers) {
        int result = (num / 3) - 2;
        if (result < 0) result = 0;
        sum += result;
    }
    cout << sum << endl;
    return 0;
}