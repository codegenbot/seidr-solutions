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

int main(){
    // Sample test cases
    vector<int> input1 = {3, -2, 5, -8, 4};
    vector<int> result1 = largest_smallest_integers(input1);
    cout << result1[0] << " " << result1[1] << endl; // Output should be -2 3
    
    vector<int> input2 = {-1, -5, -3};
    vector<int> result2 = largest_smallest_integers(input2);
    cout << result2[0] << " " << result2[1] << endl; // Output should be -1 0

    return 0;
}