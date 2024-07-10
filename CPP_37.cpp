vector<float> even_numbers;
    vector<int> even_indices;

    for (int i = 0; i < l.size(); i++){
        if (i % 2 == 0){
            even_numbers.push_back(l[i]);
            even_indices.push_back(i);
        }
    }

    sort(even_numbers.begin(), even_numbers.end());

    for (int j = 0; j < even_indices.size(); j++){
        l[even_indices[j]] = even_numbers[j];
    }

    return l;
}