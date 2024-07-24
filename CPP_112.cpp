#include <algorithm>
#include <string>
#include <vector>

bool issame(std::vector<std::string> std_vector_a, std::vector<std::string> std_vector_b) {
    if (std_vector_a.size() != std_vector_b.size()) {
        return false;
    }
    for (int i = 0; i < std_vector_a.size(); i++) {
        if (!std::equal(std_vector_a[i].begin(), std_vector_a[i].end(), std_vector_b[i].begin())) {
            return false;
        }
    }
    return true;
}

std::string reverse_delete(std::string s, std::string c) {
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
    std::vector<std::string> vec1;
    vec1.push_back(reverse_delete("mama", "mia"));
    std::cout << (issame(vec1, {"true"}) ? "true" : "false") << std::endl;
    return 0;
}