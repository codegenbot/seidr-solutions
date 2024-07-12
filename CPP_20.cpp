bool issame(vector<float> a, vector<float> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

vector<float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    pair<float, float> result = {numbers[0], numbers[1]};
    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (numbers[i + 1] - numbers[i] < min_diff) {
            min_diff = numbers[i + 1] - numbers[i];
            result = {numbers[i], numbers[i + 1]};
        }
    }
    return {result.first, result.second};
}

int main() {
    vector<float> input = {3.2, 1.1, 4.5, 2.0, 5.6};
    vector<float> result = find_closest_elements(input);
    // Test the result by comparing with expected output
    vector<float> expected_result = {4.5, 5.6};
    if (issame(result, expected_result)) {
        cout << "Test passed!" << endl;
    } else {
        cout << "Test failed!" << endl;
    }

    return 0;
}