#include <iostream>
#include <vector>
#include <cassert>

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

std::vector<int> parse_music(std::string music_string);

int main() {
    std::vector<int> test_result = parse_music("o||o|");
    std::vector<int> expected_result = {4, 1, 2, 1};
    
    assert(issame(test_result, expected_result));
    
    return 0;
}

std::vector<int> parse_music(std::string music_string){
    std::vector<int> result;
    int length = music_string.length();
    for (int i = 0; i < length; ++i) {
        if (music_string[i] == 'o') {
            result.push_back(4);
        } else if (music_string[i] == '|') {
            if (i > 0 && music_string[i - 1] == 'o') {
                result[result.size() - 1] = 2;
            } else {
                result.push_back(1);
            }
        }
    }
    return result;
}