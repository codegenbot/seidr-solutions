#include <iostream>
#include <string>
#include <cctype>

std::string camelCase(std::string& str) {
    std::string words[1024]; // Assuming max 1023 words
    int i = 0;
    char c;
    do {
        c = str[i++];
    } while (c != '\0' && c != '-' && c != ' ');
    if (c != '\0') {
        words[0] = std::string(&str[0], &str[i-1]);
    }

    for (; c != '\0'; i++) {
        do {
            c = str[i];
        } while (c != '\0' && c != '-');
        if (c != '\0') {
            words[++i] = std::string(&str[i], &str[i+1]-1);
        }
    }

    std::string result;
    for(int i = 0; i < sizeof(words)/sizeof(words[0]); i++) {
        if(i > 0) {
            result += (toupper(words[i][0]));
        } else {
            for(char c : words[i]) {
                result += tolower(c);
            }
        }
        if(i < sizeof(words)/sizeof(words[0])-1) {
            result += " ";
        }
    }

    return result;
}

int main() {
    std::string input = "camel-case example-test-string";
    std::cout << camelCase(input) << std::endl;
    return 0;
}