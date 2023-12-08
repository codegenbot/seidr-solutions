```cpp
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> parse_music(string music_string) {
    vector<int> beats;
    for (int i = 0; i < music_string.size(); i++) {
        if (music_string[i] == 'o') {
            beats.push_back(4);
        } else if (music_string[i] == '|') {
            beats.push_back(2);
        } else if (music_string[i] == '.') {
            beats.push_back(1);
        }
    }
    return beats;
}
```