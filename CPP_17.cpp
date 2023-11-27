vector<int> parse_music(string music_string){
    vector<int> beats;
    int index = 0;
    while (index < music_string.length()) {
        if (music_string[index] == 'o') {
            beats.push_back(4);
            index++;
        } else if (music_string[index] == 'o' && music_string[index+1] == '|') {
            beats.push_back(2);
            index += 2;
        } else if (music_string[index] == '.' && music_string[index+1] == '|') {
            beats.push_back(1);
            index += 2;
        } else {
            index++;
        }
    }
    return beats;
}