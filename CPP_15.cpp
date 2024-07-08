Here is the completed code:

Here is the task: Given an integer n, return a string of all numbers from 0 to n separated by spaces.

string string_sequence(int n){
    ostringstream oss;
    for (int i = 0; i <= n; ++i) {
        oss << i << " ";
    }
    return oss.str();
}