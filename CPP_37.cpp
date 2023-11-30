vector<float> sort_even(vector<float> l){
    vector<float> l_sorted = l;
    sort(l_sorted.begin(), l_sorted.end(), [](float a, float b){
        return static_cast<int>(a)%2 == 0 && static_cast<int>(b)%2 == 0 && a < b;
    });
    return l_sorted;
}