text.erase(remove_if(text.begin(), text.end(), [](char c) { return strchr("aeiouAEIOU", c) != NULL; }), text.end());
    return text;
}