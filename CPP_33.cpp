vector<int> sort_third(vector<int> l) {

    vector<int> l_prime = l;

    sort(l_prime.begin(), l_prime.end());

    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            l_prime[i] = l[i];
        }
    }

    return l_prime;
}