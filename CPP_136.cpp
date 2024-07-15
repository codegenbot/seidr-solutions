bool issame(vector<int> a, vector<int> b);

vector<int> largest_smallest_integers(vector<int> lst);

bool issame(vector<int> a, vector<int> b) {
    return a[0] == b[0] && a[1] == b[1];
}

vector<int> largest_smallest_integers(vector<int> lst){
    int largest_neg = INT_MIN, smallest_pos = INT_MAX;
    for (int num : lst) {
        if (num < 0 && num > largest_neg) {
            largest_neg = num;
        } else if (num > 0 && num < smallest_pos) {
            smallest_pos = num;
        }
    }
    return {largest_neg, smallest_pos};
}