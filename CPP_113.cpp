#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b);

std::vector<std::string> odd_count(std::vector<std::string> lst){
    std::vector<std::string> result;
    for(std::string str : lst){
        int count = 0;
        for(char c : str){
            if((c - '0') % 2 != 0){
                count++;
            }
        }
        std::string res = "The number of odd elements " + std::to_string(count) + "\nIn the string " + str + " of the input.";
        result.push_back(res);
    }
    return result;
}