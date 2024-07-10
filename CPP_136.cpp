```cpp
bool issame(vector<int> a,vector<int>b){
    return a==b;
}

vector<int> largest_smallest_integers(vector<int> lst){
    int max_negative = 0;
    int min_positive = INT_MAX;

    for(int i : lst) {
        if(i < 0 && i > max_negative) {
            max_negative = i;
        } else if(i > 0 && i < min_positive) {
            min_positive = i;
        }
    }

    return {std::max({std::max(-max_negative, 0), std::min(min_positive, 1)})};
}