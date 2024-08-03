bool issame(vector<int> a, vector<int> b) {
    if((a.size() == 2 && b.size() == 2) &&
       (a[0] == b[0] || a[1] == b[1]))
        return true;
    else
        return false;
}

vector<int> largest_smallest_integers(vector<int> lst){
    int max_negative = 0, min_positive = INT_MAX;
    for(int i : lst){
        if(i < 0 && i > max_negative) max_negative = i;
        else if(i > 0 && i < min_positive) min_positive = i;
    }
    return {(max_negative > 0) ? max_negative : 0, (min_positive < INT_MAX) ? min_positive : 0};
}

int main() {
    int result = largest_smallest_integers({-6, -4, -4, -3, -100, 1});
    assert(issame(vector<int>(result.begin(), result.end()), {-3, 1}));  
    return 0;
}