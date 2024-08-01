int search(vector<int> n) {
    map<int, int> freq;
    for (int num : n) {
        if (freq.find(num) == freq.end()) {
            freq[num] = 1;
        } else {
            freq[num]++;
        }
    }

    int result = -1;
    for (auto p : freq) {
        if (p.second >= p.first && p.first > 0) {
            result = p.first;
            break;
        }
    }

    return result;
}

int main() {
    assert(search({3, 10, 10, 9, 2}) == -1);
    return 0;
}