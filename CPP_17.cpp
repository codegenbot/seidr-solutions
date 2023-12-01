#include <vector>
#include <string>

std::vector<int> parse_music(std::string music_string) {
    std::vector<int> beats;

    for (int i = 0; i < music_string.size(); i += 2) {
        if (music_string[i] == 'o') {
            beats.push_back(4);
        } else if (music_string[i] == '|') {
            if (i + 1 < music_string.size() && music_string[i + 1] == '|') {
                beats.push_back(2);
                i++;
            } else {
                beats.push_back(1);
            }
        }
    }

    return beats;
}