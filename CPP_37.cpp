vector<float> sort_even(vector<float> l){
    vector<float> result = l;
    vector<float> even_values;

    for(int i = 0; i < result.size(); i++){
        if(i % 2 == 0){
            even_values.push_back(result[i]);
        }
    }

    sort(even_values.begin(), even_values.end());

    int index = 0;
    for(int i = 0; i < result.size(); i++){
        if(i % 2 == 0){
            result[i] = even_values[index];
            index++;
        }
    }

    return result;
}