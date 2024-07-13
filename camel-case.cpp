```cpp
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::vector<std::string> split(const std::string& str, char delimiter) {
    std::string buffer;
    std::string arr[1000];  
    int i = 0;

    for (char c : str) {
        if (c == ' ') {
            if (!buffer.empty()) {
                arr[i] = buffer;
                buffer = ""; 
                i++;
            }
        } else if (c != delimiter) {
            buffer += c;
        }

        if (c == delimiter || c == '\0') {
            if (!buffer.empty()) {
                arr[i] = buffer;
                buffer = ""; 
                i++;
            }
        }
    }

    // Added to handle empty strings
    if (!buffer.empty()) {
        arr[i] = buffer;
    }
    if (i > 1 && arr[0].empty()) {
        for(int j=0; j<i; j++){
            arr[j] = arr[j+1];
        }
        i--;
    }

    std::vector<std::string> result(arr, arr+i);
    return result;
}

std::string camelCase(const std::string& str) {
    std::vector<std::string> segments = split(str, '-');
    std::string result;

    for (int i = 0; i < segments.size(); i++) {
        if (!result.empty()) {
            result += toupper(segments[i][0]);
        } else {
            result = segments[i];
        }
        if (i < segments.size() - 1) {
            if (segments[i].size() > 1) {
                result += segments[i].substr(1);
            } else {
                result += segments[i + 1].substr(0, 1);
            }
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);

    std::cout << "camelCase: " << camelCase(input) << std::endl;

    return 0;
}