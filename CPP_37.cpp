vector<float> sort_even(vector<float> l){
    vector<float> l_sorted = l;
    for(int i = 0; i < l_sorted.size(); i += 2){
        for(int j = i + 2; j < l_sorted.size(); j += 2){
            if(l_sorted[i] > l_sorted[j]){
                swap(l_sorted[i], l_sorted[j]);
            }
        }
    }
    return l_sorted;
}