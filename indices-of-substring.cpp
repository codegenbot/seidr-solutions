#include <iostream>
#include <vector>

std::vector<int> indicesOfSubstring(std::string text, std::string target) {
    std::vector<int> result;
    int n = text.length();
    int m = target.length();

    for(int i = 0; i <= n - m; i++) {
        if(text.substr(i, m) == target)
            result.push_back(i);
    }
    return result;
}

int main() {
    std::string text;
    cin >> text;
    std::string target;
    cin >> target;

    std::vector<int> res = indicesOfSubstring(text, target);

    for(auto i : res) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}