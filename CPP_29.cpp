// Problem: CPP/29
// Description: Write a function that filters a vector of strings based on a given prefix. The function should take two parameters: the vector of strings and the prefix to filter by. It should return a new vector containing only the strings from the original vector that start with the given prefix.

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(string s : strings){
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;