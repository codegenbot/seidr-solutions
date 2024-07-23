for (char ch : c) {
        s.erase(remove(s.begin(), s.end(), ch), s.end());
    }
    string result = s;
    string check = (result == string(result.rbegin(), result.rend())) ? "True" : "False";
    return {result, check};
}