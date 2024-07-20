```cpp
// Task: Write a function that takes a vector of integers and an integer w as input, 
// and returns true if the vector can be split into two parts such that the sum of each part is less than or equal to w.
bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    if (str != reverse(str).s) {
        return false;
    }
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}