int main() {
    vector<int> numbers;
    int num;
    while (cin >> num) {
        numbers.push_back(num);
    }
    
    int sum = 0;
    for (int n : numbers) {
        sum += n;
    }

    int target = sum / 2;
    int currSum = 0;
    int idx = 0;
    for (int i = 0; i < numbers.size(); ++i) {
        if (currSum <= target) {
            currSum += numbers[i];
            idx = i;
        }
    }

    vector<int> subvec1(numbers.begin(), numbers.begin() + idx + 1);
    vector<int> subvec2(numbers.begin() + idx + 1, numbers.end());

    for (int n : subvec1) {
        cout << n << "\n";
    }
    cout << "0" << endl;
    
    for (int n : subvec2) {
        cout << n << "\n";
    }
    cout << "0" << endl;

    return 0;
}