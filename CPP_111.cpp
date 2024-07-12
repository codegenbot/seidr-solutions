int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int max_val = *max_element(arr.begin(), arr.end());
    int min_val = *min_element(arr.begin(), arr.end());
    
    cout << "Histogram: ";
    string str;
    cin >> str;
    int result = histogram(str, arr);
    cout << result << endl;
    
    return 0;
}

bool issame(map<char,int> a,map<char,int> b){
    if(a==b) return true;
    return false;
}
int histogram(string s, vector<int>& arr) {
    if (s == "print") {
        int max_val = *max_element(arr.begin(), arr.end());
        int min_val = *min_element(arr.begin(), arr.end());
        
        for (int i = min_val; i <= max_val; i++) {
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (arr[j] == i) {
                    count++;
                }
            }
            cout << count << " ";
        }
    } else {
        return -1;
    }
}