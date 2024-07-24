string result = text;
    result.erase(remove_if(result.begin(), result.end(), [](char c){ return strchr("aeiouAEIOU", c) != nullptr; }), result.end());
    return result;
}