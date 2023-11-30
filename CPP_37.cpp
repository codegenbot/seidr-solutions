vector<float> sort_even(vector<float> l){
    vector<float> result(l.size());
    vector<float> even;

    for(int i = 0; i < l.size(); i++){
        if(i % 2 == 0){
            even.push_back(l[i]);
        }
        result[i] = l[i];
    }

    sort(even.begin(), even.end());

    int evenIndex = 0;
    for(int i = 0; i < l.size(); i++){
        if(i % 2 == 0){
            result[i] = even[evenIndex++];
        }
    }

    return result;
}