int main() {
    vector<float> lst;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        float x;
        cout << "Enter element " << i+1 << ": ";
        cin >> x;
        lst.push_back(x);
    }
    
    int total = sum_squares(lst);
    cout << "Sum of squares: " << total << endl;
}