vector<int> largest_smallest_integers(vector<int> lst){
    vector<int> result(2, 0);
    int largestNegative = INT_MIN;
    int smallestPositive = INT_MAX;
    
    for(int i=0; i<lst.size(); i++){
        if(lst[i] < 0 && lst[i] > largestNegative){
            largestNegative = lst[i];
        }
        if(lst[i] > 0 && lst[i] < smallestPositive){
            smallestPositive = lst[i];
        }
    }
    
    result[0] = largestNegative != INT_MIN ? largestNegative : 0;
    result[1] = smallestPositive != INT_MAX ? smallestPositive : 0;
    
    return result;
}
bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}
int main() {
    assert (issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-3, 1}));
    assert (issame(largest_smallest_integers({-1, -2, -3, -4}), {-1, 0}));
    assert (issame(largest_smallest_integers({1, 2, 3, 4}), {0, 1}));
    assert (issame(largest_smallest_integers({0, 0, 0, 0}), {0, 0}));
    assert (issame(largest_smallest_integers({-1, -2, -3, 0}), {0, 0}));
    
    return 0;
}