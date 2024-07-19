#include <iostream>
#include <string>

int how_many_times(int, int);

int main() {
    std::string s, sub;
    int count = 0;

    std::cin >> s >> sub;

    for(int i = 0; i < s.length(); i++) {
        if(s[i] == sub[0]) {
            bool found = true;
            for(int j = 0; j < sub.size(); j++) {
                if(i + j >= s.length() || s[i + j] != sub[j]) {
                    found = false;
                    break;
                }
            }

            if(found) {
                count++;
            }
        }
    }

    std::cout << how_many_times(count, sub.size()) << std::endl;

    return 0;
}