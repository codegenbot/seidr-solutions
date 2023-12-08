```
int main() {
    // Initialize vector of positive integers
    vector<int> vec{1, 2, 3, 4, 5};
    
    // Calculate the difference between adjacent elements
    int diff = abs(vec[0] - vec[1]);
    for (int i = 1; i < vec.size()-1; i++) {
        if (abs(vec[i] - vec[i+1]) < diff) {
            diff = abs(vec[i] - vec[i+1]);
        }
    }
    
    // Check if the difference is equal to 0 or not
    if (diff == 0) {
        cout << "The vector is already sorted." << endl;
    } else {
        cout << "The spot where you should cut the vector is: " << diff << endl;
    }
    
    return 0;
}
```