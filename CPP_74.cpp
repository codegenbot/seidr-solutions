#include <vector>
#include <string>

// Function to check if strings are same (ignoring case)
bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    for (int i = 0; i < a.size(); i++) {
        if (std::toupper(a[i]) != std::toupper(b[i])) {
            return false;
        }
    }
    return true;
}

// Function to calculate total match
std::vector<std::string> total_match(std::vector<std::string> vec1, std::vector<std::string> vec2) {
    vector<string> result;
    for (int i = 0; i < vec1.size(); i++) {
        if (issame({vec1[i]}, {vec2[i]})) {
            result.push_back(vec1[i]);
        }
    }
    return result;
}

int main() {
    vector<string> vec1 = {"hi", "admin"};
    vector<string> vec2 = {"hI", "Hi"};

    vector<string> result = total_match(vec1, vec2);

    for (const string& s : result) {
        cout << s << endl;
    }

    return 0;
}