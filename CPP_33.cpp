vector<int> sort_third(vector<int> l){
    vector<int> l_prime(l.size());
    vector<int> sorted_divisible_by_three;

    for(int i = 0; i < l.size(); i++){
        if(i % 3 == 0){
            sorted_divisible_by_three.push_back(l[i]);
        }
        else{
            l_prime[i] = l[i];
        }
    }

    sort(sorted_divisible_by_three.begin(), sorted_divisible_by_three.end());

    int j = 0;
    for(int i = 0; i < l.size(); i++){
        if(i % 3 == 0){
            l_prime[i] = sorted_divisible_by_three[j];
            j++;
        }
    }

    return l_prime;
}