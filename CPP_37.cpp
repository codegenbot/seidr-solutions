vector<float> odd, even;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even.push_back(l[i]);
        } else {
            odd.push_back(l[i]);
        }
    }
    sort(even.begin(), even.end());
    vector<float> result;
    for (int i = 0, j = 0, k = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result.push_back(even[j]);
            j++;
        } else {
            result.push_back(odd[k]);
            k++;
        }
    }
    return result;
}