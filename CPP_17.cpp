vector<int> parse_music(string music_string);

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main(){
    string music_string;
    cin >> music_string;
    
    vector<int> beats = parse_music(music_string);

    return 0;
}