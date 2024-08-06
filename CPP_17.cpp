#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> parse_music(const std::string& music) {
    // Implement the logic to parse the music string and return a vector<int>
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    // Implement the logic to compare two vectors of integers
}

int main(){
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    std::cout << "Test passed." << std::endl;
    return 0;
}