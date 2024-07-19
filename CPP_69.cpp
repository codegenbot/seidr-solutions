int count(int i, vector<int> lst) {
    int occurrences = 0;
    for (int j : lst) {
        if (j == i) {
            occurrences++;
        }
    }
    return occurrences;
}

int search(vector<int> lst) {
    int max = 0;
    for (int i : lst) {
        if (i > 0 && i >= count(i, lst)) {
            max = i;
        }
    }
    return max == 0 ? -1 : max;
}

int main() {
    assert(search({3, 10, 10, 9, 2}) == -1);
}