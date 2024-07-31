#include <iostream>
#include <vector>
#include <string>

std::vector<int> parse_music(std::string music_string);

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> parse_music(std::string music_string){
    std::vector<int> beats;
    std::string note = "";
    for (char c : music_string) {
        if (c == 'o') {
            note += c;
        } else if (c == '|') {
            if (note == "o") {
                beats.push_back(4);
            } else if (note == "o|") {
                beats.push_back(2);
            } else if (note == ".|") {
                beats.push_back(1);
            }
            note = "";
        }
    }
    if (!note.empty()) {
        if (note == "o") {
            beats.push_back(4);
        } else if (note == "o|") {
            beats.push_back(2);
        } else if (note == ".|") {
            beats.push_back(1);
        }
    }
    return beats;
}

bool issame(std::vector<int> a, std::vector<int> b){
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string music_string;
    std::getline(std::cin, music_string);
    std::vector<int> beats = parse_music(music_string);
    
    // Example usage of issame function
    std::vector<int> test1 = {4, 2, 1};
    std::vector<int> test2 = {4, 2, 1};
    std::cout << std::boolalpha << issame(test1, test2) << std::endl;
    
    return 0;
}