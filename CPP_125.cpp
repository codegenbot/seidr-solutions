vector<string> split_words(string txt){
    vector<string> result;
    string current = "";
    for (char c : txt){
        if (c == ' ' || c == ','){
            if (!current.empty()){
                result.push_back(current);
                current = "";
            }
        } else {
            current += c;
        }
    }
    if (!current.empty()){
        result.push_back(current);
    }

    if (result.size() == 1 && result[0].find_first_not_of("abcdefghijklmnopqrstuvwxyz") == std::string::npos){
        int count_odd = 0;
        for (char c : result[0]){
            if (c >= 'a' && c <= 'z' && (c - 'a') % 2 == 1){
                count_odd++;
            }
        }
        result[0] = to_string(count_odd);
    }
    
    return result;
}