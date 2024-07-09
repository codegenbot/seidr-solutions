```cpp
#include <algorithm>
#include <vector>
#include <string>

std::string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length())
                return a < b;
            return a.length() > b.length();
        });
    return max_word;
}

int main() {
    vector<string> words;
    cout << "Enter the number of strings: ";
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        string str;
        cout << "Enter string " << i + 1 << ": ";
        cin >> str;
        words.push_back(str);
    }
    string max = find_max(words);
    cout << "The maximum length is: " << max.length() << endl;
    return 0;
}