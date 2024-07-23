bool below_threshold(vector<int> l, int t) {
    for (int num : l) {
        if (num >= t) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    int threshold = 3;
    
    bool is_below_threshold = below_threshold(numbers, threshold);
    
    if (is_below_threshold) {
        cout << "All elements are below the threshold." << endl;
    } else {
        cout << "At least one element is not below the threshold." << endl;
    }
    
    return 0;
}