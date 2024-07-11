for (char i : c) {
        s.erase(remove(s.begin(), s.end(), i), s.end());
    }
    string result = s;
    string reversed = result;
    reverse(reversed.begin(), reversed.end());
    return { result, result == reversed ? "True" : "False" };
}