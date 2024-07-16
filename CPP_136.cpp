bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> largest_smallest_integers(vector<int> lst){
    int largest_negative = INT_MIN, smallest_positive = INT_MAX;
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
    vector<int> input = {3, -5, 2, -8, 7, 10};
    vector<int> result = largest_smallest_integers(input);
    vector<int> expected = {-5, 2};
    
    if(issame(result, expected)){
        cout << "Test Passed" << endl;
    } else {
        cout << "Test Failed" << endl;
    }
    
    return 0;
}