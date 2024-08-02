#include <set>
#include <vector>
using namespace std;

string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            int unique_a = a.size() - (int)set<char>(a.begin(), a.end()).size();
            int unique_b = b.size() - (int)set<char>(b.begin(), b.end()).size();
            if(unique_a == unique_b)
                return a < b;
            return unique_a > unique_b;
        });
    return max_word;
}

int main() {
    assert ((find_max({"play", "play", "play"}) == "play"));
}