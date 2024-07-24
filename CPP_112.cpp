#include <algorithm>
#include <string>
#include <vector>

bool std_vector_issame(const std::vector<std::string>& std_vector_a, const std::vector<std::string>& std_vector_b) {
    if (std_vector_a.size() != std_vector_b.size()) {
        return false;
    }
    for (int i = 0; i < std_vector_a.size(); i++) {
        if (std_vector_a[i] != std_vector_b[i]) {
            return false;
        }
    }
    return true;
}

std::string reverse_delete(std::string s, const std::string& c) {
    std::string temp = "";
    for (char& ch : s) {
        bool found = false;
        for (char& cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            temp += ch;
        }
    }
    std::reverse(temp.begin(), temp.end());
    return temp;
}

int main() {
    if(std_vector_issame({reverse_delete("mamma", "mia"), reverse_delete("mammamia", "")}, {std::string("true")}) != 1) {
        std::cout << "Test Failed." << std::endl;
    }
    else
        std::cout << "Test Passed." << std::endl;
    
    return 0;
}