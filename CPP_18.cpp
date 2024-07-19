#include <iostream>
#include <string>

int how_many_times(const std::string& str, const std::string& sub) {
    int count = 0;
    size_t pos = 0;

    while ((pos = str.find(sub, pos)) != std::string::npos) {
        ++count;
        pos += sub.size();
    }

    return count;
}

int main() {
    std::string s;
    std::string sub;
    std::cin >> s >> sub;

    for (int i = 0; i < sub.size(); i++) {
        s += sub[i];
    }
    
    int result = how_many_times(s, sub);
    std::cout << "The string '" << s << "' contains the substring '" << sub << "' " << result << " times." << std::endl;
}