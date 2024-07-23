#include <vector>
#include <string>

bool isSame(vector<string> a, vector<string>b){
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size();i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

std::vector<std::string> select_words(const std::string& input, int num_words) {
    std::istringstream iss(input);
    std::vector<std::string> words;

    for(int i = 0; i < num_words && getline(iss, input, ' '); i++) {
        words.push_back(input.substr(0, input.find(' ') - 1));
        input.erase(0, input.find(' ') + 1);
    }

    return words;
}

int main() {
    assert(isSame(select_words("a b c d e f", 4) , {"b", "c", "d", "f"}));
    return 0;
}