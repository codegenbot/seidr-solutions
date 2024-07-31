#include <algorithm>

int count_distinct_characters(const std::string& str) {
    std::string temp = str;
    transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
    sort(temp.begin(), temp.end());
    temp.erase(unique(temp.begin(), temp.end()), temp.end());
    return temp.size();
}