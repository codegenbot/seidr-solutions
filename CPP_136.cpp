bool issame(vector<int> a, vector<int> b){ // add space after vector<int>
    return a == b;
}

vector<int> largest_smallest_integers(vector<int> lst){
    vector<int> result = {0, 0};
    int max_neg = INT_MIN;
    int min_pos = INT_MAX;
    
    for(int num : lst){
        if(num < 0 && num > max_neg){
            max_neg = num;
        } else if(num > 0 && num < min_pos){
            min_pos = num;
        }
    }
    
    result[0] = max_neg == INT_MIN ? 0 : max_neg;
    result[1] = min_pos == INT_MAX ? 0 : min_pos;
    
    return result;
}

int main(){
    assert (issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-3, 1})); // correct function call syntax
    return 0;
}