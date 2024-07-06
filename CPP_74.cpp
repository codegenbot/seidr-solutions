#include <vector>
#include <string>

bool issame(const std::string& str1, const std::string& str2) {
    return str1 == str2;
}

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    int sum1 = 0;
    for (const auto& s : lst1) {
        sum1 += s.size();
    }
    
    int sum2 = 0;
    for (const auto& s : lst2) {
        sum2 += s.size();
    }

    if (sum1 < sum2) {
        return lst1;
    } else if (sum1 > sum2) {
        return lst2;
    } else {
        vector<string> result;
        for(const string &s:lst1){
            bool found = false;
            for(const string& s2 : lst2){
                if(issame(s,s2)){
                    found=true;
                    break;
                }
            }
            if(found)
                result.push_back(s);
        }
        return result;
    }
}