```cpp
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> parse_music(string music_string) {
    vector<int> beats(music_string.size(), 0);
    for (int i = 0; i < music_string.size(); i++) {
        if (music_string[i] == 'o') {
            beats[i] = 4;
        } else if (music_string[i] == '|') {
            beats[i] = 2;
        } else if (music_string[i] == '.') {
            beats[i] = 1;
        }
    }
    return beats;
}
```