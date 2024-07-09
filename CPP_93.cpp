#include<string>
#include<cctype>
using namespace std;

string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            c = toupper(c);
            if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                c = 'Z';
                switch (c - 'A') {
                    case 0:
                        c = 'B';
                        break;
                    case 1:
                        c = 'C';
                        break;
                    case 2:
                        c = 'D';
                        break;
                    case 3:
                        c = 'E';
                        break;
                    case 4:
                        c = 'F';
                        break;
                }
            } else {
                c = tolower(c);
                if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                    c = 'z';
                    switch (c - 'a') {
                        case 0:
                            c = 'b';
                            break;
                        case 1:
                            c = 'c';
                            break;
                        case 2:
                            c = 'd';
                            break;
                        case 3:
                            c = 'e';
                            break;
                        case 4:
                            c = 'f';
                            break;
                    }
                }
            }
        }
        result += c;
    }
    return result;
}