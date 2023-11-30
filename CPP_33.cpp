vector<int> sort_third(vector<int> l){
    vector<int> l_prime = l;
    for(int i = 0; i < l.size(); i++){
        if(i % 3 == 0){
            int start = i;
            int end = i + 3;
            sort(l_prime.begin() + start, l_prime.begin() + end);
        }
    }
    return l_prime;
}