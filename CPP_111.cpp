```cpp
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
    histogram(min_val, max_val);
    
    return 0;
}

void histogram(int min_val, int max_val) {
    for (int i = min_val; i <= max_val; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == i) {
                count++;
            }
        }
        cout << count << " ";
    }
}