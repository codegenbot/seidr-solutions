int main() {
    vector<int> input;
    int num;
    while(cin >> num) {
        input.push_back(num);
    }

    int sum = 0;
    for(int i = 0; i < input.size(); i++) {
        sum += (input[i] / 3) - 2;
    }

    cout << sum << endl;
    
    return 0;
}