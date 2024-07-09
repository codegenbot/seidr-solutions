vector<int> count_up_to(int n);

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> result = count_up_to(n);
    
    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}