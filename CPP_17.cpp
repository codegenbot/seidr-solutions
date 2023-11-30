vector<int> parse_music(string music_string){
    vector<int> beats;
    int i = 0;
    while(i < music_string.size()){
        if(music_string[i] == 'o'){
            beats.push_back(4);
        }
        else if(music_string[i] == ' '){
            i++;
            continue;
        }
        else{
            beats.push_back(1);
        }
        i++;
    }
    return beats;
}