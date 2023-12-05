```
vector<float> sort_even(vector<float> l) {
    vector<float> even_sorted;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_sorted.push_back(l[i]);
        }
    }
    sort(even_sorted.begin(), even_sorted.end());
    return even_sorted;
}
```