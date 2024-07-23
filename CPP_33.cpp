vector<int> indices;
    for(int i = 0; i < l.size(); ++i){
        if(i % 3 == 0){
            indices.push_back(i);
        }
    }
    vector<int> temp;
    for(int idx : indices){
        temp.push_back(l[idx]);
    }
    sort(temp.begin(), temp.end());
    for(int i = 0; i < indices.size(); ++i){
        l[indices[i]] = temp[i];
    }
    return l;
}