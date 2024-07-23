bool below_threshold(vector<int> l, int t) {
    for (int num : l) {
        if (num >= t) {
            return false;
        }
    }
    return true;
} 

int main() {
    vector<int> numbers = {10, 20, 30};
    int threshold = 25;
    
    bool result = below_threshold(numbers, threshold);
    
    cout << "Are all elements in the list below the threshold? " << (result ? "Yes" : "No") << endl; 

    return 0;