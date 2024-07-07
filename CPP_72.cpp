```cpp
bool will_it_fly(vector<int> q, int w) {
    string s = "";
    for (int i : q) {
        s += to_string(i);
    }
    if (s != s.substr(0, s.length() - 1) && s != s.substr(s.length()-1)) {
        return false;
    } else {
        long total = 0;
        for (int i : q) {
            total += i;
        }
        return total <= w;
    }
}