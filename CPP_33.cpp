vector<int> result(l);
    vector<int> third_elements;

    for (int i = 0; i < l.size(); ++i) {
        if ((i+1) % 3 == 0) {
            third_elements.push_back(l[i]);
        }
    }

    sort(third_elements.begin(), third_elements.end());

    int idx = 0;
    for (int i = 0; i < l.size(); ++i) {
        if ((i+1) % 3 == 0) {
            result[i] = third_elements[idx++];
        }
    }

    return result;
}