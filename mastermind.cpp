#include <iostream>
#include <string>

bool isValidInput(const std::string& input) {
    return input.length() == 4 && input.find_first_not_of("ABCDEF") == std::string::npos && input.find(" ") == std::string::npos;
}

int main() {
    int freq_code[6] = {0};
    int freq_guess[6] = {0};
    std::string code, guess;
    std::cin >> code >> guess;

    int whitePegs = 0, blackPegs = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++blackPegs;
        } else {
            ++freq_code[code[i] - 'A'];
            ++freq_guess[guess[i] - 'A'];
        }
    }

    for (int i = 0; i < 6; ++i) {
        whitePegs += std::min(freq_code[i], freq_guess[i]);
    }

    std::cout << whitePegs << " " << blackPegs << std::endl;

    return 0;
}