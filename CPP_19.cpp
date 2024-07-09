#include <algorithm>
#include <string>
#include <map>
using namespace std;

string sort_numbers(string numbers) {
    map<string, int> numMap;
    for (int i = 0; i <= 9; i++) {
        string str = to_string(i);
        if (i == 0) {
            str = "zero";
        } else if (i == 1) {
            str = "one";
        } else if (i == 2) {
            str = "two";
        } else if (i == 3) {
            str = "three";
        } else if (i == 4) {
            str = "four";
        } else if (i == 5) {
            str = "five";
        } else if (i == 6) {
            str = "six";
        } else if (i == 7) {
            str = "seven";
        } else if (i == 8) {
            str = "eight";
        } else {
            str = "nine";
        }
        numMap[str] = i;
    }

    vector<string> words;
    for (int i = 0; i < numbers.size(); i++) {
        string word;
        while (numbers[i] != ' ') {
            word += numbers[i];
            i++;
        }
        words.push_back(word);
    }

    sort(words.begin(), words.end(), [&numMap](string a, string b) {
        return to_string(numMap[a]) < to_string(numMap[b]);
    });

    string result;
    for (int i = 0; i < words.size(); i++) {
        if (i > 0)
            result += " ";
        result += words[i];
    }
    return result;
}