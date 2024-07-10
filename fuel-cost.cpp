Here is the solution:

int calculate(int n) {
    return (n / 3 - 2);
}

int main() {
    int n;
    cin >> n;
    
    vector<int> vec;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        
        if(x > 0) {
            vec.push_back(calculate(x));
        } else {
            cout << "Invalid input. Please enter positive integer." << endl;
            return 1;
        }
    }
    
    int sum = 0;
    for(int i = 0; i < vec.size(); i++) {
        sum += vec[i];
    }
    
    cout << sum << endl;
    
    return 0;
}