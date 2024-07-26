map<char, int> histogram(string test) {
    map<char, int> result;
    map<int, vector<char>, greater<int>> count_map;

    for (char& c : test) {
        if (c != ' ') {
            count_map[c]++;
        }
    }

    int max_count = 0;
    for (auto& pair : count_map) {
        if (pair.first >= max_count) {
            max_count = pair.first;
            for (char& c : pair.second) {
                result[c] = pair.first;
            }
        } else {
            break; // Once the count decreases, break the loop
        }
    }

    return result;
}