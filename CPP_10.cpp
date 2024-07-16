int main() {
    string input_str;
    cin >> input_str;

    if (input_str.empty()) {
        cout << "" << endl;
    } else {
        int n = input_str.size();
        int i = n - 1;
        while (i >= 0 && !is_palindrome(input_str.substr(i))) {
            i--;
        }

        string prefix = input_str.substr(0, i);
        string palindrome_suffix(input_str.rbegin(), input_str.rbegin() + (n - i));
        cout << input_str + string(prefix.rbegin(), prefix.rend()) + palindrome_suffix << endl;
    }
    return 0;
}