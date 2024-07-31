for (char i : c) {
        s.erase(remove(s.begin(), s.end(), i), s.end());
    }
    string result = s;
    string reverse_result = result;
    reverse(reverse_result.begin(), reverse_result.end());
    return {result, result == reverse_result ? "True" : "False"};
}