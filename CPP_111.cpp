#include <map>
#include <cassert>

bool issame(const std::map<char, int>& a, const std::map<char, int>& b){
    return a == b;
}

std::map<char, int> histogram(const std::string& str){
    std::map<char, int> freq;
    for(char c : str){
        freq[c]++;
    }
    return freq;
}

int main(){
    assert(issame(histogram("a"), {{'a', 1}}));
    return 0;
}