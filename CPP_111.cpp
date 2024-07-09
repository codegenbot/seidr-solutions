#include <map>

bool issame(std::map<char, int> a, std::map<char, int> b);
bool histogram();

bool issame(std::map<char, int> a, std::map<char, int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (const auto &entry : a) {
        if (b.find(entry.first) == b.end() || b[entry.first] != entry.second) {
            return false;
        }
    }
    
    return true;
}