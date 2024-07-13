int main() {
    vector<int> input;
    int temp;
    while(cin >> temp) {
        input.push_back(temp);
    }
    
    int sum = 0;
    for(int i = 0; i < input.size(); i++) {
        sum += max(input[i] / 3 - 2, 0);
    }
    
    cout << sum;
    
    return 0;
}