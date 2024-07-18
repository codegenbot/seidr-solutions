string result = s;
    result.erase(remove_if(result.begin(), result.end(), 
        [&c](char ch){ return c.find(ch) != string::npos; }), 
        result.end());
    string reverseResult = result;
    reverse(reverseResult.begin(),reverseResult.end());
    return {result, result == reverseResult ? "True" : "False"};
}