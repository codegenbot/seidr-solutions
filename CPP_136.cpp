Here is the completed code:

vector<int> largest_smallest_integers(vector<int> lst) {
    int max_negative = 0, min_positive = INT_MAX;
    for (int i : lst) {
        if (i < 0 && i > max_negative) {
            max_negative = i;
        } else if (i > 0 && i < min_positive) {
            min_positive = i;
        }
    }
    return {(max_negative > 0 ? 0 : max_negative), (min_positive < 1 ? 0 : min_positive)};
}