#include <vector>
#include <unordered_map>
#include <cassert>
#include <iostream>

class cpp_160 {
public:
    cpp_160() {}
    int do_algebra(const std::vector<std::string>& ops, const std::unordered_map<int,int>& nums) {
        if (ops.size() != static_cast<size_t>(nums.size())) {
            return -1;
        }
        
        int result = *nums.begin()->second;
        for (int i = 0; i < ops.size(); i++) {
            if (ops[i] == "*") {
                result *= nums.at(i+1).second;
            } else if (ops[i] == "//") {
                result /= nums.at(i+1).second;
            }
        }
        
        return result;
    }
};

int main() {
    cpp_160 obj;
    int output = obj.do_algebra({{"*","//"}}, {{1,7},{2,3},{3,4}});
    std::cout << output << std::endl;
}