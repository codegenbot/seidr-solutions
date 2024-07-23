for (char ch : c) {
        s.erase(remove(s.begin(), s.end(), ch), s.end());
    }
    string result = s;
    string revResult = s;
    reverse(revResult.begin(), revResult.end());
    return {result, (result == revResult) ? "True" : "False"};
}