#include <string>

int how_many_times(std::string str, std::string substring) {
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find(substring, pos)) != std::string::npos) {
        ++count;
        pos += 1; // Skip the found substring for overlapping search
    }
    return count;
}

int main() {
    assert (how_many_times("john doe", "john") == 1);
}