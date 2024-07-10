Here is the completed code:

```cpp
vector<int> make_a_pile(int n) {
    vector<int> pile;
    for (int i = 0; ; i++) {
        if ((i + 1) % 2 == 0) {
            pile.push_back(i * 2 + 1);
        } else {
            pile.push_back(i * 2 + 3);
        }
        if (pile.back() > n) break;
    }
    return pile;
}