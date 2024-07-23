vector<float> even_indexes;
    for (int i = 0; i < l.size(); i++){
        if (i % 2 == 0){
            even_indexes.push_back(l[i]);
        }
    }
    sort(even_indexes.begin(), even_indexes.end());

    int even_indexes_index = 0;
    for (int i = 0; i < l.size(); i++){
        if (i % 2 == 0){
            l[i] = even_indexes[even_indexes_index];
            even_indexes_index++;
        }
    }

    return l;
}