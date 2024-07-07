Here is the completed code:

```cpp
vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    int n = numbers.size();
    float min_diff = numeric_limits<float>::max();

    pair<float, float> closest_pair;

    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            float diff = numbers[j] - numbers[i];
            if (abs(diff) < min_diff) {
                min_diff = abs(diff);
                closest_pair = make_pair(numbers[i], numbers[j]);
            }
        }
    }

    return vector<pair<float, float>>(1, closest_pair));
}