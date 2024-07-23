vector<int> divisible_by_three_indices;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            divisible_by_three_indices.push_back(i);
        }
    }
    vector<int> sorted_values;
    for (int index : divisible_by_three_indices) {
        sorted_values.push_back(l[index]);
    }
    sort(sorted_values.begin(), sorted_values.end());
    for (int i = 0; i < divisible_by_three_indices.size(); ++i) {
        l[divisible_by_three_indices[i]] = sorted_values[i];
    }

    return l;
}