bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> largest_smallest_integers(vector<int> lst){
    int largest_negative = INT_MIN;
    int smallest_positive = INT_MAX;
    
    for(int num : lst){
        if(num < 0 && num > largest_negative){
            largest_negative = num;
        }
        if(num > 0 && num < smallest_positive){
            smallest_positive = num;
        }
    }
    
    return {largest_negative, smallest_positive};
}

int main() {
    // Test the largest_smallest_integers function
    vector<int> input = {3, -5, 2, -1, 7, 0, -4};
    vector<int> result = largest_smallest_integers(input);
    
    cout << "Largest Negative: " << result[0] << endl;
    cout << "Smallest Positive: " << result[1] << endl;
    
    return 0;
}