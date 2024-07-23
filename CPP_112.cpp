string result = s;
    result.erase(remove_if(result.begin(), result.end(), [c](char x) { return c.find(x) != string::npos; }), result.end());
    
    return {result, result == string(result.rbegin(), result.rend()) ? "True" : "False"};
}