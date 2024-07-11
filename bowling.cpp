#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    int total = 0;
    int frame = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            total += 10;
            if (frame < 9) {
                total += (s[i + 1] == 'X' || s[i + 1] == '/') ? 10 : (isdigit(s[i + 1]) ? s[i + 1] - '0' : 0);
                total += (s[i + 2] == 'X' || s[i + 2] == '/') ? 10 : (isdigit(s[i + 2]) ? s[i + 2] - '0' : 0);
            } else if (frame == 9) {
                total += ((s[i + 1] == 'X' ? 10 : (isdigit(s[i + 1]) ? s[i + 1] - '0' : 0)) + (s[i + 2] == 'X' ? 10 : (isdigit(s[i + 2]) ? s[i + 2] - '0' : 0)));
            }
            frame++;
        } else if (s[i] == '/') {
            total += 10 - (s[i - 1] - '0');
            total += ((i + 1 < s.size()) ? (s[i + 1] == 'X' ? 10 : (isdigit(s[i + 1]) ? s[i + 1] - '0' : 0)) : 0);
            
            if (frame < 9) {
                total += (s[i + 1] == 'X' || s[i + 1] == '/') ? 10 : (isdigit(s[i + 1]) ? s[i + 1] - '0' : 0);
            }
            frame++;
        } else if (isdigit(s[i])) {
            total += s[i] - '0';
            if (frame < 9) {
                total += (s[i + 1] == 'X' || s[i + 1] == '/') ? 10 : (isdigit(s[i + 1]) ? s[i + 1] - '0' : 0);
            }
            frame++;
        }
    }

    std::cout << total << std::endl;

    return 0;
}