vector<float> odd_indices, even_indices;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            even_indices.push_back(l[i]);
        } else {
            odd_indices.push_back(l[i]);
        }
    }
    sort(even_indices.begin(), even_indices.end());
    for (int i = 0, j = 0, k = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            l[i] = even_indices[j++];
        } else {
            l[i] = odd_indices[k++];
        }
    }
    return l;