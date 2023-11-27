#include <string>
#include <vector>

int count_distinct_characters(std::string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    std::vector<char> distinctChars;

    for (char c : str) {
        if (find(distinctChars.begin(), distinctChars.end(), c) == distinctChars.end()) {
            distinctChars.push_back(c);
        }
    }

    return distinctChars.size();
}

int main() {
    assert(count_distinct_characters("Jerry jERRY JeRRRY") == 5);
    return 0;
}