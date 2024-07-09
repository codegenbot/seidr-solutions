#include <vector>
#include <algorithm>

using namespace std;

struct Str {
    string val;
};

Str find_max(vector<Str> words){
    Str max_word = *max_element(words.begin(), words.end(),
        [](const Str& a, const Str& b) {
            if (a.val.length() == b.val.length())
                return a.val < b.val;
            return a.val.length() > b.val.length();
        });
    return max_word;
}

int main() {
    assert ((find_max({"play", "play", "play"}) == (Str){{"play"}}));
    return 0;
}