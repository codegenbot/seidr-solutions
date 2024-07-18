pair<int, int> largest_smallest_integers(vector<int> lst){
    int max_neg = 0, min_pos = 0;
    for (int num : lst) {
        if (num < 0 && num < max_neg) {
            max_neg = num;
        } else if (num > 0 && (num < min_pos || min_pos == 0)) {
            min_pos = num;
        }
    }
    return {max_neg, min_pos};
}

int main(){
    auto result = largest_smallest_integers({-6, -4, -4, -3, -100, 1});
    assert(result.first == -3 && result.second == 1);
    return 0;
}