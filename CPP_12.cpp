vector<string>::iterator it = max_if(strings.begin(), strings.end(), [](const string& a, const string& b){return a.size() < b.size();});
if(it == strings.end())
    return "";
return *it;