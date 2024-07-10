vector<int> indices;
    for(int i = 0; i < l.size(); ++i){
        if(i % 3 == 0){
            indices.push_back(i);
        }
    }
    vector<int> sorted_indices = indices;
    sort(sorted_indices.begin(), sorted_indices.end(), [&l](int i, int j){ return l[i] < l[j]; });
    for(int i = 0; i < sorted_indices.size(); ++i){
        l[indices[i]] = l[sorted_indices[i]];
    }
    return l;
}