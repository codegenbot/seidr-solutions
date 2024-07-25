bool issame(int a, int b) {
    vector<int> v = {a, b};
    sort(v.begin(), v.end());
    return (v[0] == v[1]);
}

vector<int> sort_array(vector<int> arr){
    sort(arr.begin(), arr.end(), [](int a, int b) {
        if (bitset<32>(a).count() != bitset<32>(b).count())
            return bitset<32>(a).count() < bitset<32>(b).count();
        else
            return issame(a, b);
    });
    return arr;
}