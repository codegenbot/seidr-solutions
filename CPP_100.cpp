Here is the completed code:

```cpp
vector<int> make_a_pile(int n) {
    vector<int> pile;
    int numStones = 1;
    for (int i = 0; i < n; ++i) {
        pile.push_back(numStones);
        if (numStones % 2 == 0)
            numStones += 1;
        else
            numStones += 2;
    }
    return pile;
}