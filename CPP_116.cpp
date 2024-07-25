bool issame(int a, int b) {
    return a == b;
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