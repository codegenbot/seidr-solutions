#include <string>
#include <vector>
#include <algorithm>

std::string find_max(std::vector<std::string> words) {
    std::string max_word = *min_element(words.begin(),words.end(), 
                                          [](const std::string &a, const std::string &b) {
                                              return std::count(a.begin(), a.end(), a[0]) > std::count(b.begin(), b.end(), b[0]);
                                          });
    return max_word;
}