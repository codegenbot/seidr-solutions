
bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> largest_smallest_integers(vector<int> lst);

vector<int> largest_smallest_integers(vector<int> lst) {
    int largest_negative = INT_MIN, smallest_positive = INT_MAX;
    for (int num : lst) {
        if (num < 0 && num < largest_negative) {
            largest_negative = num;
        } else if (num > 0 && num < smallest_positive) {
            smallest_positive = num;
        }
    }
    vector<int> result;
    if (largest_negative != INT_MIN) {
        result.push_back(largest_negative);
    }
    if (smallest_positive != INT_MAX) {
        result.push_back(smallest_positive);
    }
    return result;
}

int main() {
    vector<int> lst = {3, -7, 5, 0, -2};
    vector<int> result = largest_smallest_integers(lst);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}
