vector<int> sort_third(vector<int> l){
    vector<int> result = l;
    vector<int> sorted_third;

    for(int i = 0; i < l.size(); i++){
        if(i % 3 == 0){
            sorted_third.push_back(l[i]);
        }
    }

    sort(sorted_third.begin(), sorted_third.end());

    int j = 0;
    for(int i = 0; i < l.size(); i++){
        if(i % 3 == 0){
            result[i] = sorted_third[j++];
        }
    }

    return result;
}