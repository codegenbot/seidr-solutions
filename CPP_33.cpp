vector<int> sort_third(vector<int> l){
    vector<int> result = l;
    vector<int> sorted;
    for(int i = 0; i < result.size(); i++){
        if(i % 3 == 0){
            sorted.push_back(result[i]);
        }
    }
    sort(sorted.begin(), sorted.end());
    int j = 0;
    for(int i = 0; i < result.size(); i++){
        if(i % 3 == 0){
            result[i] = sorted[j];
            j++;
        }
    }
    return result;
}