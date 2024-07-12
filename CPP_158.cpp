```cpp
#include <vector>
#include <string>
#include <algorithm>

int main() {
    vector<string> words = {"play", "play", "play"};
    string max_word = *max_element(words.begin(), words.end(), 
                                  [](const string& a, const string& b) {
                                      return count(a.begin(), a.end(), unique(a.begin(), a.end())[0]) > 
                                             count(b.begin(), b.end(), unique(b.begin(), b.end())[0]);
                                  });
    cout << "The maximum word is: " << max_word << endl;
}