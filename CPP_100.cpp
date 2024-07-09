Here is the completed code:

```cpp
vector<int> make_a_pile(int n) {
    vector<int> pile(n);
    int num = 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            pile[i] = num;
            num += 2;
        } else {
            pile[i] = num;
            num += 1;
        }
    }
    return pile;
}