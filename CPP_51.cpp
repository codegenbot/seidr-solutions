string result = text;
    result.erase(remove_if(result.begin(), result.end(), [](char c) { return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'; }), result.end());
    return result;
}