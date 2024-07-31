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
    vector<int> input = {3, -2, 5, -7, 1};
    vector<int> output = largest_smallest_integers(input);
    
    vector<int> expected_output = {-2, 1};
    
    if (issame(output, expected_output)){
        // Output is as expected
        return 0;
    } else {
        // Output is not as expected
        return 1;
    }
}