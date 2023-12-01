vector<int> sort_third(vector<int> l){
    vector<int> result = l;

    for(int i=0; i<l.size(); i++){
        if(i % 3 == 0){
            result[i] = l[i];
        }
    }

    sort(result.begin(), result.end(), [](int a, int b){
        return a < b;
    });

    return result;
}