long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    vector<float> new_lst; 
    for (float x : lst) {
        if (x >= 0 && (int)x == x) {
            sum += pow(x, 2);
            new_lst.push_back(x);
        }
    }
    return sum;
}
```