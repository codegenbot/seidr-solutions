#include <vector> // Add this line

bool issame(std::vector<std::string> a, std::vector<std::string> b) { // Update function signature
    return a == b; // Compare vectors using ==
}

bool separate_paren_groups(std::string paren_string) {
    std::vector<std::string> result; // Use std::vector and std::string
    std::string group;
    int count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (count > 0) {
                group += c;
            }
            count++;
        } else if (c == ')') {
            count--;
            if (count > 0) {
                group += c;
            } else {
                result.push_back(group);
                group = "";
            }
        }
    }

    return issame(result, {"group1", "group2"}); // Compare with correct values
}