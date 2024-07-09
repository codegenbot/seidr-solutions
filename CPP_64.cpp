```cpp
#include <string>

int vowels_count(std::string s){
    int count = 0;
    for (char c : s) {
        if ((c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') ||
            (c == 'y' && s.size() - 1 == find(s.rbegin(), s.rend(), c) - s.rbegin())) {
            count++;
        }
    }
    return count;
}

int main(){
    assert(vowels_count("ACEDY") == 3);
    return 0;
}