#include <algorithm>
#include <set>
#include <vector>
#include <string>

std::string find_max(std::vector<std::string> words){
    std::string result = *minmax_element(words.begin(), words.end(),
        [](const std::string& a, const std::string& b) {
            return count(a.begin(), a.end(), unique_copy(a.begin(), a.end())) <
                   count(b.begin(), b.end(), unique_copy(b.begin(), b.end()));
        }
    )->first;
    return result;
}

int main() {
    assert ((find_max({"play", "play", "play"}) == "play"));
    // your code
}