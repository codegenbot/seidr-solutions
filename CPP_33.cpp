vector<int> sort_third(vector<int> l){
    vector<int> result = l;
    vector<int> sorted;
    for(int i=0; i<result.size(); i++){
        if(i % 3 == 0){
            sorted.push_back(result[i]);
        }
    }
    sort(sorted.begin(), sorted.end());
    int index = 0;
    for(int i=0; i<result.size(); i++){
        if(i % 3 == 0){
            result[i] = sorted[index];
            index++;
        }
    }
    return result;
}