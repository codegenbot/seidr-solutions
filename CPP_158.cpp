#include <algorithm>
#include <vector>
#include <string>

const string find_max(vector<string> words){
    string res = *max_element(words.begin(), words.end(),
        [](const string &a, const string &b) {
            auto a_unique_chars = a.size();
            auto b_unique_chars = b.size();
            if(a_unique_chars == b_unique_chars)
                return a < b;
            return a_unique_chars > b_unique_chars;
        }
    );
    return res;
}