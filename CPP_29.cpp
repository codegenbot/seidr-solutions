// Problem: CPP/29
// Description: Filter the given list of strings by including only those 
//             that start with a certain prefix.

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(string s : strings){
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;