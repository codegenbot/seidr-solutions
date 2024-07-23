```cpp
#include <vector>
#include <string>

std::vector<std::string> select_words(const std::string& input, int num_words) {
    std::vector<std::string> words;
    size_t pos = 0;
    do {
        pos = input.find(' ', pos);
        if (pos != std::string::npos) {
            size_t next_pos = input.find(' ', pos + 1);
            words.push_back(input.substr(pos + 1, (next_pos != std::string::npos)?(next_pos - pos - 1):std::string::npos));
            pos = next_pos;
        }
    } while (pos != std::string::npos && words.size() < num_words);

    return words;
}

bool isSame(vector<string> a, vector<string>b){
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size();i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

int main() {
    assert(isSame(select_words("a b c d e f", 1) , {"b", "c", "d", "f"}));
}