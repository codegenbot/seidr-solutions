// Given a sequence of integers q and an integer w, determine whether it is possible for a plane to land safely with the given weight limit w.
bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    if (str != reverse(str).substr(1, str.length() - 1)) return false;
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}