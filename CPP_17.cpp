#include <iostream>
#include <vector>
using namespace std;

int main() {
    string music;
    getline(cin, music);

    vector<int> beats = parse_music(music);

    for (int i = 0; i < beats.size(); i++) {
        cout << beats[i] << " ";
    }
    cout << endl;

    return 0;
}