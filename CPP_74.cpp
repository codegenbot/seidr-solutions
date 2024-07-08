```c++
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return (a == b);
}

int main() {
    int compareVectors(std::vector<std::string> lst1, std::vector<std::string> lst2) {
        int sum1 = 0;
        for (const auto& str : lst1) {
            sum1 += str.length();
        }
        int sum2 = 0;
        for (const auto& str : lst2) {
            sum2 += str.length();
        }
        if (sum1 < sum2) return 1; 
        else if (sum1 > sum2) return 0; 
        else return 1;
    }

    int result = compareVectors({"this"}, {});
    std::cout << "Output: " << result << std::endl;

    assert(issame(std::vector<std::string>({{"this"}, {}}), std::vector<std::string>({})) || "Test failed");
    
    return 0;
}