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

int sum_squares(const vector<float>& lst){
    int total = 0;
    for(float x : lst){
        total += pow(ceil(x),2);
    }
    return total;
}