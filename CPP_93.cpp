string vowels = "aeiouAEIOU";
    string replace = "cgkqwgCKKQW";

    for (auto &c : message) {
        // Swap case
        if (islower(c)) c = toupper(c);
        else if (isupper(c)) c = tolower(c);
        
        // Replace vowels
        auto pos = vowels.find(c);
        if (pos != string::npos) {
            c = replace[pos];
        }
    }

    return message;
}