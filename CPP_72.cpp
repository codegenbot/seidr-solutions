```cpp
bool will_it_fly(vector<int> q, int w) {
    bool flag = true;
    string s = "";
    for (int i : q) {
        s += to_string(i);
    }
    if (!s.equals(std::to_string(s))) {
        flag = false;
    }
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return flag && sum <= w;
}

int main() {
    assert (will_it_fly({5}, 5) == true);
    return 0;
}