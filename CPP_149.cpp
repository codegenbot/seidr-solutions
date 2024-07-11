```#include <vector>
#include <string>
#include <algorithm>

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    std::sort(lst.begin(), lst.end());
    for(int i = 0; i < lst.size(); ++i)
        if(lst[i].find("red") != std::string::npos)
            return {};
    int sum = 0;
    for(const auto& s : lst)
        if(s.find("red") == std::string::npos) {
            int temp = 0;
            for(char c : s) 
                if(c >= '0' && c <= '9') 
                    temp = temp * 10 + (c - '0');
            sum += temp;
        }
    return {std::to_string(sum)};
}``