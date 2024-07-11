vector<float> even;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even.push_back(l[i]);
        }
    }
    sort(even.begin(), even.end());
    
    vector<float> result;
    int evenIndex = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result.push_back(even[evenIndex]);
            evenIndex++;
        } else {
            result.push_back(l[i]);
        }
    }
    
    return result;
}