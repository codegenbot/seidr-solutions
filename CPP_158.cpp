```cpp
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int result = find_max({"play", "play", "play"});
    cout << result;
}

string find_max(vector<string> words){
    string max = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b){
            if(a.size() == b.size()) return a < b;
            return a.size() > b.size();
        });
    return max;
}