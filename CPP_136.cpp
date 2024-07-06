```cpp
bool issame(vector<int> a, vector<int> b) {
    return (a == b);
}

vector<int> largest_smallest_integers(vector<int> lst){
    int max_negative = 0;
    int min_positive = INT_MAX;

    for(int i : lst){
        if(i < 0 && i > max_negative) max_negative = i;
        else if(i > 0 && i < min_positive) min_positive = i;
    }

    return {(max_negative >= 0) ? 0 : max_negative, (min_positive <= 0) ? 0 : min_positive};
}

int main() {
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), vector<int>({ {-3}, 1 })));
    return 0;
}