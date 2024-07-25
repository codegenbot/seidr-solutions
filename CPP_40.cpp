bool triples_sum_to_zero(vector<int>& l) {
    for (int i = 0; i < l.size() - 2; i++) {
        for (int j = i + 1; j < l.size() - 1; j++) {
            for (int k = j + 1; k < l.size(); k++) {
                if (l[i] + l[j] + l[k] == 0) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    vector<int> l = {1, 2, -3, 4, -1};
    if (triples_sum_to_zero(l)) {
        cout << "There exists a triplet that sums to zero." << endl;
    } else {
        cout << "No triplet sums to zero." << endl;
    }

    return 0;
}