#include <algorithm>
#include <vector>
#include <string>

const std::string& find_max(const vector<string>& words) {
    string res = *max_element(words.begin(), words.end(),
        [](const string &a, const string &b) {
            auto a_unique_chars = count(a.begin(), a.end(), '*');
            auto b_unique_chars = count(b.begin(), b.end(), '*');
            if(a_unique_chars == b_unique_chars)
                return a < b;
            return a_unique_chars > b_unique_chars;
        }
    );
    return res;
}