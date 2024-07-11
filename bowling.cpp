#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    int total = 0;
    int frame = 0;
    int i = 0;

    while (frame < 10) {
        if (s[i] == 'X') {
            total += 10 + ((s[i + 1] == 'X') ? 10 + ((s[i + 2] == 'X') ? 10 : (isdigit(s[i + 2]) ? s[i + 2] - '0' : 0)) : ((s[i + 2] == '/') ? 10 : (s[i + 1] == '/' ? 10 - (s[i + 2] - '0') : (isdigit(s[i + 1]) ? s[i + 1] - '0' : 0)));
            i++;
        } else if (s[i + 1] == '/') {
            total += 10 + ((s[i + 2] == 'X') ? 10 : (isdigit(s[i + 2]) ? s[i + 2] - '0' : 0));
            i += 2;
        } else {
            total += (isdigit(s[i]) ? (s[i] - '0') : 0) + (isdigit(s[i + 1]) ? (s[i + 1] - '0') : 0);
            i += 2;
        }
        frame++;
    }

    std::cout << total << std::endl;

    return 0;
}