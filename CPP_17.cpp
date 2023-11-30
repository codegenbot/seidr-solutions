vector<int> parse_music(string music_string){
    vector<int> beats;
    string note;
    int i = 0;
    
    while(i < music_string.size()){
        if(music_string[i] == 'o'){
            if(music_string[i+1] == '|'){
                beats.push_back(2);
                i += 2;
            }
            else{
                beats.push_back(4);
                i++;
            }
        }
        else if(music_string[i] == '.'){
            beats.push_back(1);
            i += 2;
        }
        else{
            i++;
        }
    }
    
    return beats;
}