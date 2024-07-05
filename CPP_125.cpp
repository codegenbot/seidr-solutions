vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0;
    string delimiter = " ";
    
    // Check if there are any whitespaces
    if (txt.find(' ') != string::npos) {
        while ((pos = txt.find(' ')) != string::npos) {
            result.push_back(txt.substr(0, pos));
            txt.erase(0, pos + 1);
        }
        result.push_back(txt);
    } 
    // Check if there are any commas
    else if (txt.find(',') != string::npos) {
        delimiter = ",";
        while ((pos = txt.find(delimiter)) != string::npos) {
            result.push_back(txt.substr(0, pos));
            txt.erase(0, pos + delimiter.length());
        }
        result.push_back(txt);
    } 
    // No whitespaces or commas, count odd order lower-case letters
    else {
        int count = 0;
        for (char c : txt) {
            if (c >= 'a' && c <= 'z' && (c - 'a') % 2 == 0) {
                count++;
            }
        }
        result.push_back(to_string(count));
    }
    
    return result;
}