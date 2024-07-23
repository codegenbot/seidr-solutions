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
    pair<int, int> result = largest_smallest_integers({-3, -5, 1, 4, 2});
    pair<int, int> expected = {1, -5};
    
    if (issame(result, expected)) {
        cout << "Test Passed" << endl;
    } else {
        cout << "Test Failed" << endl;
    }

    return 0;
}