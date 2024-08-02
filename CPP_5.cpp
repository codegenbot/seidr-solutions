#include <vector>  
  
std::vector<int> intersperse(const std::vector<int>& input, int value);  
bool issame(const std::vector<int>& a, const std::vector<int>& b);  
  
int main() {  
    assert (issame(intersperse({2, 2, 2}, 2), std::vector<int>{2, 2, 2, 2, 2}));  
    return 0;  
}  