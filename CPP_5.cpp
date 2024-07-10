#include <vector>

using namespace std;

std::vector<int> intersperse(const std::vector<int>& vec, int val);

std::vector<int> intersperse(const std::vector<int>& vec, int val){
    std::vector<int> result;
    for(const auto& num : vec){
        result.push_back(num);
        result.push_back(val);
    }
    return result;
}