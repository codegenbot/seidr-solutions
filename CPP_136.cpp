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
    pair<int, int> result = largest_smallest_integers(lst);
    pair<int, int> expected_result = {5, -8};
    
    if (issame(result, expected_result)) {
        cout << "Test Passed" << endl;
    } else {
        cout << "Test Failed" << endl;
    }

    return 0;
}