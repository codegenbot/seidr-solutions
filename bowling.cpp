#include <string>

int main() {
    std::string s = "X|9/-||5/25/|8/18|/0|X||1/2/X";
    int score = bowlingScore(s);
    std::cout << "The total score is: " << score << std::endl;
    return 0;
}