```cpp
bool issame(vector<int> a, vector<int> b) {
    return (a.size() == 2 && b.size() == 2 && a[0] == b[0] && a[1] == b[1]);
}

int main() {
    vector<int> largest_smallest_integers(vector<int> lst) {
        int a = 0, b = INT_MAX;
        for (int x : lst) {
            if (x < 0 && x > a) a = x;
            else if (x > 0 && x < b) b = x;
        }
        return {a, b};
    }

    vector<int> input;
    cout << "Enter some integers separated by space: ";
    while (true) {
        int num;
        cin >> num;
        input.push_back(num);
        char c;
        cin >> c;
        if (c == 'q') break;
    }
    
    vector<int> result = largest_smallest_integers(input);
    
    cout << "Largest and smallest integers are: ";
    for(int x : result) cout << x << " ";
    cout << endl;

    vector<vector<int>> pairs;
    cin >> c;
    while (c != 'q') {
        vector<int> pair;
        cin >> pair[0] >> pair[1];
        pairs.push_back(pair);
        cin >> c;
    }

    for(vector<int> p : pairs) {
        if(issame(p, result)) cout << "Same as largest and smallest integers." << endl;
        else cout << "Not same as largest and smallest integers." << endl;
    }
}