bool pairs_sum_to_zero(std::vector<int> l) {
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
    std::vector<int> sample_input = {2, -2, 3, 5, -5};
    assert(pairs_sum_to_zero(sample_input) == true);

    return 0;
}