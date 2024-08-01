// Given a sequence of integers q and an integer w, determine whether it is possible for a plane to fly at a speed equal to the sum of the integers in the sequence and stay within the weight limit w.
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