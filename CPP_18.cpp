#include <string>
#include <iostream>

int how_many_times(std::string str, std::string sub) {
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find(sub)) != std::string::npos) {
        count++;
        str.erase(pos, sub.length());
    }
    return count;
}

int main() {
    string sub = "Hello"; 
    string s = "Hello World Hello"; 
    cout << how_many_times(s, sub);
    return 0;
}