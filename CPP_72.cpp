Here is the completed code:

```cpp
bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int x : q) {
        str += to_string(x);
    }
    if (str != reverse(str).s)
        return false;
    int sum = 0;
    for (int x : q) {
        sum += x;
    }
    return sum <= w;
}