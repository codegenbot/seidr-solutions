vector<float> sort_even(vector<float> l){
    vector<float> sorted_even;

    for(int i = 0; i < l.size(); i++){
        if(i % 2 == 0){
            sorted_even.push_back(l[i]);
        }
    }

    sort(sorted_even.begin(), sorted_even.end());

    int k = 0;
    for(int i = 0; i < l.size(); i++){
        if(i % 2 != 0){
            sorted_even.insert(sorted_even.begin() + i, l[k]);
            k++;
        }
    }

    return sorted_even;
}