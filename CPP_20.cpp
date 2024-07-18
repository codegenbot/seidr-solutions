bool issame(const vector<int>& vec1, const vector<int>& vec2) {
    return vec1 == vec2;
}

pair<int, int> find_closest_elements(vector<int>& numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    pair<int, int> closest_pair = make_pair(numbers[0], numbers[1]);
    for (int i = 1; i < numbers.size() - 1; ++i) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair = make_pair(numbers[i], numbers[i + 1]);
        }
    }
    return {closest_pair.first, closest_pair.second};
}

int main() {
    // Example usage of the find_closest_elements function
    vector<int> numbers = {3, 5, 8, 13, 18};
    pair<int, int> closest = find_closest_elements(numbers);
    cout << "Closest pair: " << closest.first << " and " << closest.second << endl;

    return 0;
}