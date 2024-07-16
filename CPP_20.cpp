bool issame(vector<float> a, vector<float> b) {
    return abs(a[0] - b[0]) < 0.000001 && abs(a[1] - b[1]) < 0.000001;
}

pair<float, float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    pair<float, float> closest_pair;
    float min_diff = numbers[1] - numbers[0];

    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (numbers[i + 1] - numbers[i] < min_diff) {
            min_diff = numbers[i + 1] - numbers[i];
            closest_pair.first = numbers[i];
            closest_pair.second = numbers[i + 1];
        }
    }

    return {closest_pair.first, closest_pair.second};
}

int main() {
    vector<float> numbers = {3.5, 1.2, 4.8, 2.1, 5.6};
    pair<float, float> result = find_closest_elements(numbers);
    cout << "Closest pair: " << result.first << " and " << result.second << endl;

    return 0;
}