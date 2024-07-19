bool issame(int a, int b) {
    return abs(a) == abs(b);
}

vector<int> largest_smallest_integers(vector<int> lst) {
    int largest_negative = INT_MIN, smallest_positive = INT_MAX;
    for (int num : lst) {
        if (num < 0 && num > largest_negative) {
            largest_negative = num;
        } else if (num > 0 && (num < smallest_positive || issame(num, smallest_positive))) {
            smallest_positive = num;
        }
    }
    return {smallest_positive, largest_negative};
}