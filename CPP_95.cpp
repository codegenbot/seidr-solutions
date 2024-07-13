bool all_lower = true, all_upper = true;

for (auto it = dict.begin(); it != dict.end(); ++it) {
    if (!all_lower && !all_upper) break;
    string key = it->first;
    for (char &c : key) {
        c = tolower(c);
        all_lower &= c == tolower(c);
        c = toupper(c);
        all_upper &= c == toupper(c);
    }
}

return all_lower || all_upper;