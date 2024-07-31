for (char ch : c) {
        s.erase(remove(s.begin(), s.end(), ch), s.end());
    }
    
    string result = s;
    string reversed = s;
    reverse(reversed.begin(), reversed.end());
    
    vector<string> output;
    output.push_back(result);
    output.push_back(result == reversed ? "True" : "False");

    return output;
}