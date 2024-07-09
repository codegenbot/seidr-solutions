```cpp
#include <string>

int mastermind(std::basic_string<char> code, std::basic_string<char> guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    for (char c : guess) {
        int count = 0;
        for (char d : code) {
            if (c == d) {
                count++;
            }
        }
        if (count > 1) {
            white += count - 1;
        } else if (count == 1) {
            black--;
        }
    }

    return black + white;
}

int main(int argc, char** argv) {
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " <code> <guess>" << std::endl;
        return 1;
    }
    std::string code = argv[1];
    std::string guess = argv[2];
    int result = mastermind(code, guess);
    std::cout << "Black pegs: " << result << std::endl;
    return 0;
}