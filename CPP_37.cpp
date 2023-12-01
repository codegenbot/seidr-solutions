vector<float> sort_even(vector<float> l){
    vector<float> result;
    vector<float> even;

    for(int i=0; i<l.size(); i++){
        if(i % 2 == 0){
            even.push_back(l[i]);
        }
        result.push_back(l[i]);
    }
    sort(even.begin(), even.end());

    int j = 0;
    for(int i=0; i<result.size(); i++){
        if(i % 2 == 0){
            result[i] = even[j];
            j++;
        }
    }

    return result;
}
