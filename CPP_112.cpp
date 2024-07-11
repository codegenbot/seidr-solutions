string result = s;
    for (char ch : c) {
        result.erase(std::remove(result.begin(), result.end(), ch), result.end());
    }
    string reversed = result;
    std::reverse(reversed.begin(), reversed.end());
    return {result, result == reversed ? "True" : "False"};
}