vector<int> largest_smallest_integers(vector<int> lst);

bool issame(vector<int> a, vector<int> b) {
    vector<int> result = largest_smallest_integers(a);
    vector<int> expected = largest_smallest_integers(b);
    return result == expected;
}

vector<int> largest_smallest_integers(vector<int> lst){
    int max_neg = INT_MIN, min_pos = INT_MAX;
    for(int num : lst){
        if(num < 0 && num > max_neg){
            max_neg = num;
        }
        if(num > 0 && num < min_pos){
            min_pos = num;
        }
    }
    return {max_neg, (min_pos == INT_MAX ? 0 : min_pos)};
}