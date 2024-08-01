// Function signature: Determine whether a sequence of weights can be evenly distributed among planes for flight.
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