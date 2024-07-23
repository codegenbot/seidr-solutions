transform(text.begin(), text.end(), text.begin(), ::tolower);
text.erase(remove_if(text.begin(), text.end(), [](char c) { return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'; }), text.end());
return text;