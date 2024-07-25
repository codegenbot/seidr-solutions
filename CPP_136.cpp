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
    // Sample code to test the functions
    vector<int> input = {3, -5, 2, -8, 10};
    vector<int> result = largest_smallest_integers(input);
    
    cout << "Largest Negative: " << result[0] << endl;
    cout << "Smallest Positive: " << result[1] << endl;
    
    vector<int> a = {1, 2, 3};
    vector<int> b = {1, 2, 3};
    
    cout << "Vectors a and b are " << (issame(a, b) ? "equal" : "not equal") << endl;
    
    return 0;
}