Here is the completed code:

```cpp
vector<int> make_a_pile(int n) {
    vector<int> result;
    int stones = n;

    while (stones > 0) {
        if (n % 2 == 1) {
            result.push_back(2 * stones + 1);
            stones = 0;
        } else {
            result.push_back(2 * stones);
            stones /= 2;
        }
        n -= 1;
    }

    return result;
}