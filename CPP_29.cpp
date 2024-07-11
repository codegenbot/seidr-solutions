// Problem: CPP/29
// Description: Given a list of strings and a prefix, return all the strings that start with this prefix.

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(string s : strings){
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;