vector<int> parse_music(string music_string){
    vector<int> beats;
    int length = music_string.length();
    for(int i=0; i<length; i+=3){
        if(music_string[i] == 'o'){
            if(music_string[i+1] == '|'){
                beats.push_back(2);
            }
            else{
                beats.push_back(4);
            }
        }
        else{
            beats.push_back(1);
        }
    }
    return beats;
}