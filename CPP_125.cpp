#include <string>
#include <vector>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}