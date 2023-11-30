vector<int> sort_third(vector<int> l){
    vector<int> l_sorted = l;
    sort(l_sorted.begin(), l_sorted.end(), [](int a, int b){
        return a % 3 == 0 && b % 3 == 0 ? a < b : false;
    });
    return l_sorted;
}