```cpp
#include <vector>
#include <string>
#include <algorithm>

bool issame(vector<string> a,vector<string> b){
    vector<string> a_copy(a);
    vector<string> b_copy(b);

    transform(a_copy.begin(), a_copy.end(), a_copy.begin(),
               (unsigned int(*)(unsigned int))std::tolower);
    transform(b_copy.begin(), b_copy.end(), b_copy.begin(),
               (unsigned int(*)(unsigned int))std::tolower);

    return a_copy == b_copy;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}