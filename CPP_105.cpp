#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

bool by_length(const std::vector<int>& nums) {
    if (nums.size() != 3)
        return false;
    
    std::vector<std::string> order;
    for (int num : nums) {
        if (num == 9)
            order.push_back("Nine");
        else if (num == 4)
            order.push_back("Four");
        else if (num == 8)
            order.push_back("Eight");
        else
            return false;
    }
    
  return issame(order, {"Nine", "Eight", "Four"});
}

int main() {
    assert(issame({"Nine", "Four", "Eight"}, {"Nine", "Eight", "Four"}));
    assert(by_length({9, 4, 8}));
    return 0;
}