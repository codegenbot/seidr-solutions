bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> largest_smallest_integers(vector<int> lst){
    vector<int> result = {INT_MIN, INT_MAX};
    int largest_negative = 0;
    int smallest_positive = 0;
    
    for (int num : lst) {
        if (num < 0 && num < largest_negative) {
            largest_negative = num;
        }
        if (num > 0 && (num < smallest_positive || smallest_positive == 0)) {
            smallest_positive = num;
        }
    }
    
    if (largest_negative == 0) {
        result[0] = 0;
    } else {
        result[0] = largest_negative;
    }
    
    if (smallest_positive == 0) {
        result[1] = 0;
    } else {
        result[1] = smallest_positive;
    }
    
    return result;
}

int main() {
    // Test the functions here
    return 0;
}