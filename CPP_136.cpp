vector<int> largest_smallest_integers(vector<int> lst){
    int largest_neg = 0, smallest_pos = 0;

    for (int num : lst) {
        if (num < 0 && num < largest_neg) {
            largest_neg = num;
        } else if (num > 0 && (num < smallest_pos || smallest_pos == 0)) {
            smallest_pos = num;
        }
    }

    return {largest_neg, smallest_pos};
}