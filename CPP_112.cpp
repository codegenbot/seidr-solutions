string result = s;
    for (char ch : c) {
        result.erase(remove(result.begin(), result.end(), ch), result.end());
    }
    string resultPalindrome = result;
    reverse(resultPalindrome.begin(), resultPalindrome.end());
    return {result, result == resultPalindrome ? "True" : "False"};
}