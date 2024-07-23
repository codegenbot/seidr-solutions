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

bool issame(pair<int, int> a, pair<int, int> b){
    return a.first == b.first && a.second == b.second;
}

int main() {
    pair<int, int> result = largest_smallest_integers({-2, 5, 3, -8, 10});
    pair<int, int> expected = {3, -8};
    if (issame(result, expected)) {
        cout << "Result is correct." << endl;
    } else {
        cout << "Result is incorrect." << endl;
    }
    return 0;
}