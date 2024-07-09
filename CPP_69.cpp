Here is the completed code:

```cpp
int search(vector<int> lst) {
    int result = 0;
    for (int i : lst) {
        if (i > 0 && i <= count) {
            return i;
        }
        count = accumulate(cbegin(lst), cend(lst), 0, 
                            [](int a, int b){return a + (b == i);});
    }
    return -1;
}