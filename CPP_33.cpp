vector<int> res = l;
    vector<int> div_by_three_indices;
    for(int i = 0; i < l.size(); ++i){
        if(i % 3 == 0){
            div_by_three_indices.push_back(i);
        }
    }
    for(int idx : div_by_three_indices){
        res[idx] = l[idx];
    }
    sort(div_by_three_indices.begin(), div_by_three_indices.end(), [&](int a, int b){return l[a] < l[b];});
    for(int i = 0; i < div_by_three_indices.size(); ++i){
        res[div_by_three_indices[i]] = l[div_by_three_indices[i]];
    }
    return res;
}