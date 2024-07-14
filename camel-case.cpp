```cpp
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::vector<std::string> split(const std::string& str, char delimiter) {
    std::string buffer;
    std::vector<std::string> arr;

    for (char c : str) {
        if (c == ' ') {
            if (!buffer.empty()) {
                arr.push_back(buffer);
                buffer = ""; 
            }
        } else if (c != delimiter) {
            buffer += c;
        }

        if (c == delimiter || c == '\0') {
            if (c != '\0' && !buffer.empty()) {
                arr.push_back(buffer);
                buffer = ""; 
            }
        }
    }

    // Added to handle empty strings
    if (!buffer.empty()) {
        arr.push_back(buffer);
    }
    for(int j=arr.size()-1; j>0; j--){
        if(arr[j].empty()){
            arr.erase(arr.begin()+j);
            j--;
        } else{
            break;
        }
    }

    return arr;
}

std::string camelCase(const std::string& str) {
    std::vector<std::string> segments = split(str, '-');
    std::string result;

    for (int i = 0; i < segments.size(); i++) {
        if (!segments[i].empty()) {
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