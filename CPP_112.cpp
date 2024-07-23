string result;
    for(auto ch : s) {
        if(c.find(ch) == string::npos) {
            result.push_back(ch);
        }
    }
    string reverseResult = result;
    reverse(reverseResult.begin(), reverseResult.end());
    return {result, result == reverseResult ? "True" : "False"};
}