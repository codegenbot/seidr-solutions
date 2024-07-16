string result = s;
    for (char ch : c) {
        result.erase(remove(result.begin(), result.end(), ch), result.end());
    }
    
    string reversed_result = result;
    reverse(reversed_result.begin(), reversed_result.end());
    
    return {result, result == reversed_result ? "True" : "False"};
}