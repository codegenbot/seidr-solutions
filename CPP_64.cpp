#include <string>

int vowels_count(std::string s) {
    int count = 0;
    for (char c : s) {
        switch (std::tolower(c)) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                if (c == 'y' && s.size() - 1 == std::distance(s.rbegin(), std::find(s.rbegin(), s.rend(), c))) {
                    break;
                }
                count++;
                break;
        }
    }
    return count;
}