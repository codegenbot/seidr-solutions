```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0)
            return false;
    }
    return true;
}

vector<string> split(const string& s, const string& delimiter) {
    vector<string> result;
    size_t pos = 0;
    while ((pos = s.find(delimiter)) != string::npos) {
        result.push_back(s.substr(0, pos));
        s.erase(0, pos + delimiter.length());
    }
    result.push_back(s);
    return result;
}

string words_in_sentence(string sentence){
    string result = "";
    for (const auto& word : split(sentence, " ")){
        if(is_prime(word.length())){
            result += word + " ";
        }
    }
    return result.substr(0, result.length() - 1);
}

int main() {
    string input;
    cout << "Enter a sentence: ";
    getline(cin, input);
    cout << "Words with prime length: " << words_in_sentence(input) << endl;
    return 0;
}