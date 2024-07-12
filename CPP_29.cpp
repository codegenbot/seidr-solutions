#include <vector>
using namespace std;

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, string prefix){
    std::vector<std::string> result;
    for(string s : strings){
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;
}