string vowels = "aeiouAEIOU";
    text.erase(std::remove_if(text.begin(), text.end(), 
        [&](char c){ return vowels.find(c) != std::string::npos; }), text.end());
    return text;
}