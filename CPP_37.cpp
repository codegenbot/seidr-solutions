vector<float> sort_even(vector<float> l){
    vector<float> result = l;
    vector<float> even_nums;
    for (int i = 0; i < l.size(); i++){
        if (i % 2 == 0){
            even_nums.push_back(l[i]);
        }
    }
    sort(even_nums.begin(), even_nums.end());
    int even_index = 0;
    for (int i = 0; i < l.size(); i++){
        if (i % 2 == 0){
            result[i] = even_nums[even_index++];
        }
    }
    return result;
}