string result = s;
    for (char ch : c) {
        result.erase(remove(result.begin(), result.end(), ch), result.end());
    }
    
    string resultCopy = result;
    reverse(resultCopy.begin(), resultCopy.end());
    
    return {result, result == resultCopy ? "True" : "False"};
}