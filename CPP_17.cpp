vector<int> parse_music(string music_string){ 
    vector<int> result;
    int count = 0;
    for(char note : music_string){
        if(note == 'o'){
            result.push_back(4);
            count = 0;
        } else if(note == '|'){
            if(count == 0){
                result.back() = 2;
                count++;
            } else {
                result.back() = 1;
                count = 0;
            }
        }
    }
    return result;
}