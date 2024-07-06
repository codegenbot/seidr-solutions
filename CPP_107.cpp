Here is the solution:

vector<int> even_odd_palindrome(int n) {
    vector<int> result(2);
    for (int i = 1; i <= n; i++) {
        string str = to_string(i);
        if (str == reverse(str).str()) {
            if (i % 2 == 0)
                result[0]++;
            else
                result[1]++;
        }
    }
    return result;
}