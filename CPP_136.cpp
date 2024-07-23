pair<int, int> largest_smallest_integers(vector<int> lst){
    int largest_negative = 0, smallest_positive = 0;
    for (int num : lst) {
        if (num < 0 && num < largest_negative) {
            largest_negative = num;
        } else if (num > 0 && (num < smallest_positive || smallest_positive == 0)) {
            smallest_positive = num;
        }
    }
    return {smallest_positive, largest_negative};
}

bool issame(pair<int, int> a, pair<int, int> b) {
    return a == b;
}

int main() {
    pair<int, int> result = largest_smallest_integers({-5, 3, -2, 8, -10, 4});
    pair<int, int> expected_result = {3, -10};
    if (issame(result, expected_result)) {
        cout << "Test Passed" << endl;
    } else {
        cout << "Test Failed" << endl;
    }
    return 0;
}