vector<float> sort_even(vector<float> l){
    vector<float> result = l;
    vector<float> even_values;
    
    for(int i = 0; i < l.size(); i++){
        if(i % 2 == 0){
            even_values.push_back(l[i]);
        }
    }
    
    sort(even_values.begin(), even_values.end());
    
    int j = 0;
    for(int i = 0; i < l.size(); i++){
        if(i % 2 == 0){
            result[i] = even_values[j];
            j++;
        }
    }
    
    return result;
}