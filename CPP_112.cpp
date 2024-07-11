string result = s;
    result.erase(remove_if(result.begin(), result.end(), [c](char ch) { return c.find(ch) != string::npos; }), result.end());
    string reversedResult = result;
    reverse(reversedResult.begin(), reversedResult.end());
    return {result, result == reversedResult ? "True" : "False"};
}