bool pairs_sum_to_zero(vector<int> l) {
    for (int i = 0; i < l.size(); i++) {
        for (int j = i + 1; j < l.size(); j++) {
            if (l[i] + l[j] == 0) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    vector<int> sampleInput = {2, -2, 3, 1};
    assert(pairs_sum_to_zero(sampleInput) == true);
    return 0;
}