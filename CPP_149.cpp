#include <vector>
#include <algorithm>
#include <sstream>

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    std::sort(lst.begin(), lst.end());
    
    for(int i = 0; i < lst.size() -1 ; i++) {
        int sum1 = lexical_cast<int>(lst[i].substr(1, lst[i].find(" ") -1));
        int sum2 = lexical_cast<int>(lst[i+1].substr(1, lst[i+1].find(" ") -1));
        
        if(sum1 + sum2 > lexical_cast<int>(lst[i+1].substr(1, lst[i+1].find(" ") -1)) && i < lst.size() - 2) {
            return {};
        }
    } 
    return lst;
}