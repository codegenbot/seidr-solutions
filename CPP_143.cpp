#include <vector>
#include <algorithm>

string words_in_sentence(string sentence) {
    vector<int> lengths;
    string result = "";

    for (const auto& word : split(sentence, ' ')) {
        int length = word.length();
        bool isPrime = true;

        if (length > 1) {
            for (int i = 2; i * i <= length; i++) {
                if (length % i == 0) {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime) {
                result += word + " ";
                lengths.push_back(length);
            }
        }
    }

    return result.substr(0, result.size() - 1);
}

vector<string> split(const string& s, char c) {
    vector<string> v;
    size_t pos = 0;
    while ((pos = s.find(c)) != string::npos) {
        v.push_back(s.substr(0, pos));
        s = s.substr(pos + 1);
    }
    v.push_back(s);
    return v;
}