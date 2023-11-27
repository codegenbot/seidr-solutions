#include <vector>
std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
 std::vector<int> indices;
 int pos = 0;
 while (pos < text.size()) {
     pos = text.find(target, pos + 1);
     if (pos == std::string::npos) {
         break;
     }
     indices.push_back(pos);
     pos += target.size();
 }
 return indices;
}