vector<float> odd_elements;
    vector<float> even_elements;
    vector<float> result;

    for (int i = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            even_elements.push_back(l[i]);
        } else {
            odd_elements.push_back(l[i]);
        }
    }
    sort(even_elements.begin(), even_elements.end());

    for(int i = 0, j = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            result.push_back(even_elements[j]);
        } else {
            result.push_back(odd_elements[i / 2]);
        }
    }
    return result;
}