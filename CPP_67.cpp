#include<string>
using namespace std;

int fruit_distribution(string s, int n) {
    size_t pos = 0;
    string temp = "";
    for (size_t i = 0; i < s.length(); i++) {
        if (isdigit(s[i])) {
            temp += s[i];
        } else if (!temp.empty()) {
            pos = i;
            break;
        }
    }
    int total = stoi(temp);
    string[] words = s.split(" ");
    for (int i = 0; i < words.length; i++) {
        if (words[i].contains("apples") || words[i].contains("oranges")) {
            temp = words[i].split(" ")[0];
            int count = stoi(temp);
            total -= count;
        }
    }
    return n - total;
}