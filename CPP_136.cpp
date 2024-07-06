```cpp
bool issame(vector<int> a, vector<int> b) {
    return (a.size() == 2 && b.size() == 2 && a[0] == b[0] && a[1] == b[1]);
}

int main() {
    int n;
    cin >> n;
    
    vector<int> lst(n);
    for(int i = 0; i < n; i++)
        cin >> lst[i];
    
    vector<int> largest_smallest_integers(vector<int> lst) {
        int a = 0, b = INT_MAX;
        for (int x : lst) {
            if (x < 0 && x > a) a = x;
            else if (x > 0 && x < b) b = x;
        }
        return {a, b};
    }
    
    vector<int> result = largest_smallest_integers(lst);
    cout << "Largest smallest integer is " << result[0] << " and Smallest largest integer is " << result[1];
    if(issame(largest_smallest_integers(lst), result))
        cout << endl;
    else
        cout << "\nNot same" << endl;
}