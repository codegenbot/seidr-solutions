#include <vector>
#include <algorithm>

using namespace std;

struct Str {
    string s;
};

Str find_max(vector<Str> words){
    Str max_word = *max_element(words.begin(), words.end(),
        [](const Str& a, const Str& b) {
            if (a.s.length() == b.s.length())
                return a.s < b.s;
            return a.s.length() > b.s.length();
        });
    return max_word;
}

int main() {
    assert ((find_max({"play", "play", "play"}) == {"play"});
    return 0;
}