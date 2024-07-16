#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    int index = 0;
    
    while (index <= text.length() - target.length()) {
        size_t found = text.find(target);
        
        if (found != std::string::npos) {
            result.push_back(found);
            text.erase(0, found + target.length());
            index = 0;
        } else {
            index++;
        }
    }
    
    return result;
}

int main() {
    // Read the input from user
    string text;
    int num;
    cin >> text;
    cin >> num;

    // Process the input and generate output
    vector<int> indices = indicesOfSubstring(text, num + string(num.begin(), num.end()));

    // Print the output
    cout << "[";
    for (int i : indices) {
        cout << i << " ";
    }
    cout << "]";

    return 0;
}