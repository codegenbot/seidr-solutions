#include <vector>
#include <string>

int do_algebra(std::vector<std::string> operations, std::vector<int> values) {
    int result = values[0];
    
    for (unsigned i = 0; i < operations.size(); ++i) {
        if (operations[i] == "+") {
            result += values[i+1];
        } else {
            // Add more operations as needed
            std::cerr << "Error: Unknown operation: " << operations[i] << std::endl;
            return -1; 
        }
    }
    
    return result;
}

int main() {
    assert(do_algebra({"+"}, {1}) == 2); 
}