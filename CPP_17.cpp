#include <sstream>

vector<int> parse_music(string music_string){ 
    vector<int> beats;
    stringstream ss(music_string);
    string note;
    
    while (ss >> note) {
        if (note == "o")
            beats.push_back(4);
        else if (note == "o|")
            beats.push_back(2);
        else if (note == ".|")
            beats.push_back(1);
    }
    
    return beats;
}