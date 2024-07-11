#include <string>

int main() {
    std::string s = "X | X | X | X | X | X | 7/4 | 3/5 | 0/10 | X";
    int score = bowlingScore(s);
    std::cout << "The score is: " << score << std::endl;
    return 0;
}