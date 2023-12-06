Solve the following code contest problem: CPP/93. Problem description: Complete the following code given the task description and function signature.. Currently, the code is ```
```
#include <iostream>
#include <string>
#include <cctype>

std::string encode(const std::string& message) {
    std::string encoded;
    for (int i = 0; i < message.size(); ++i) {
        char c = message[i];
        if (isalpha(c)) {
            if (isupper(c)) {
                c = tolower(c);
            } else {
                c = toupper(c);
            }
            encoded += c;
        } else {
            encoded += c;
        }
    }
    return encoded;
}
```
The issue is that the code contains backticks (``) which are not allowed in C++. To fix this, you can remove the backticks and replace them with single quotes (') or double quotes ("):
```
#include <iostream>
#include <string>
#include <cctype>

std::string encode(const std::string& message) {
    std::string encoded;
    for (int i = 0; i < message.size(); ++i) {
        char c = message[i];
        if (isalpha(c)) {
            if (isupper(c)) {
                c = tolower(c);
            } else {
                c = toupper(c);
            }
            encoded += c;
        } else {
            encoded += c;
        }
    }
    return encoded;
}
You must only return correct code. Remove any triple quotes, language name or explanations.