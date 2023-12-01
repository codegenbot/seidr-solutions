vector<float> find_closest_elements(vector<float> numbers);

bool issame(vector<float> a, vector<float> b) {
    float minDiff = abs(a[0] - b[0]);
    int index1 = 0;
    int index2 = 0;

    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < b.size(); j++) {
            float diff = abs(a[i] - b[j]);
            if (diff < minDiff) {
                minDiff = diff;
                index1 = i;
                index2 = j;
            }
        }
    }

    vector<float> result;
    result.push_back(min(a[index1], b[index2]));
    result.push_back(max(a[index1], b[index2]));

    return result;
}