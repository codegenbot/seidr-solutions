```cpp
// Given an array of integers q and a positive integer w, 
// determine whether it is possible for a plane with weight capacity w 
// to fly with the given weights.

bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    if (str != reverse(str).s) return false;
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}
int main() {
    assert (will_it_fly({5}, 5) == true);
    return 0;
}