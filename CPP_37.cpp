vector<float> sort_even(vector<float> l) {
    vector<float> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            vector<float> evenNumbers;
            for (int j = 0; j < l.size(); j++) {
                if (j % 2 == 0) {
                    evenNumbers.push_back(l[j]);
                }
            }
            sort(evenNumbers.begin(), evenNumbers.end());
            result.push_back(evenNumbers[0]);
        } else {
            result.push_back(l[i]);
        }
    }
    return result;
}