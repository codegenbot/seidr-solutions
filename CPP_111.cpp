#include <map>
#include <string>

// Prototype for histogram function
std::map<char, int> histogram(std::string);

bool issame(std::map<char,int> a,std::map<char,int> b){
    return a == b;
}

int main() {
    assert(issame(histogram("a"), { {'a', 1} }));
    return 0;
}