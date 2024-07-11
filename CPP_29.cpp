// Problem: CPP/29
// Description: Write a function that takes a vector of strings and a prefix string as input. The function should return a new vector containing all the strings in the original vector that start with the given prefix.

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(string s : strings){
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;