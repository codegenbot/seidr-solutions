```cpp
#include <vector>
#include <string>

std::string int_to_mini_romank(int number) {
    std::vector<std::pair<int, char>> romans = {{1000,'M'},{900,'C'},{500,'D'},{400,'C'},{100,'C'},{90,'X'},
                                         {50,'L'},{40,'X'},{10,'X'},{9,'I'},{5,'V'},{4,'I'},{1,'I'}};
    std::string roman = "";
    for (auto p : romans) {
        while (number >= p.first) {
            number -= p.first;
            roman += p.second;
        }
    }
    return roman;
}

int main() {
    assert (int_to_mini_romank(1000) == "M");
}