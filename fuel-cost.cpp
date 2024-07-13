Here is the solution:

int solve(vector<int>& v) {
    int sum = 0;
    for (int i : v) {
        int temp = (i / 3); // divide each by 3
        temp = floor(temp); // round the result down to the nearest integer
        temp -= 2; // subtract 2
        sum += temp; // add all new integers in the vector
    }
    return sum;
}