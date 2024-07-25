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
    // Example usage
    vector<int> input = {3, -5, 2, -8, 7};
    vector<int> result = largest_smallest_integers(input);

    for(int num : result){
        cout << num << " ";
    }

    return 0;
}