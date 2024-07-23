#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    bool b_exists = false;
    for(string s : b) {
        if(a.size() > 0 && !b_exists && a[0] == s)
            b_exists = true;
    }
    return b_exists;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    bool is_found = false;
    
    for(string s : strings) {
        if(s.find(substring) != string::npos) {
            result.push_back(s);
            is_found = true;
        }
    }
    
    if(is_found) {
        for(auto b : {"before", "after"}) {
            vector<string> temp;
            if(b == "before") {
                for(string s : strings) {
                    if(!s.find(substring))
                        temp.push_back(s);
                }
            } else if(b == "after") {
                vector<string> remaining = strings;
                while(!is_found) {
                    string next;
                    for(string s : remaining) {
                        if(s.find(substring) != string::npos) {
                            next = s;
                            is_found = true;
                            break;
                        }
                    }
                    if(is_found)
                        break;
                    remaining.erase(std::remove(remaining.begin(), remaining.end(), next), remaining.end());
                }
                temp = remaining;
            }
            for(string s : temp)
                result.push_back(s);
        }
    } else {
        vector<string> remaining = strings;
        while(!is_found) {
            string next;
            for(string s : remaining) {
                if(s.find(substring) != string::npos) {
                    next = s;
                    is_found = true;
                    break;
                }
            }
            if(is_found)
                break;
            remaining.erase(std::remove(remaining.begin(), remaining.end(), next), remaining.end());
        }
        for(string s : remaining)
            result.push_back(s);
    }

    vector<string> result_final;
    bool found_again = false;

    for(string s : result) {
        if(!found_again && s.find(substring) != string::npos) 
            found_again = true;
        else if(found_again && s.find(substring) == string::npos)
            break;
        result_final.push_back(s);
    }
    
    return result_final;
}