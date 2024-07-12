#include <iostream>
#include <vector>

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<int> parse_music(string music_string){
    vector<int> beats;
    int i = 0;
    while(i < music_string.size()){
        if(i+1 < music_string.size() && music_string[i] == 'o' && music_string[i+1] != '|'){
            beats.push_back(4);
            i += 2;
        } else if(i+2 < music_string.size() && music_string[i] == 'o' && music_string[i+1] == '|'){
            beats.push_back(2);
            i += 3;
        } else if(i+2 < music_string.size() && music_string[i] == '.' && music_string[i+1] == '|'){
            beats.push_back(1);
            i += 3;
        }
    }
    return beats;
}

int main() {
    std::string music_string = "o|o.o|o";
    vector<int> beats = parse_music(music_string);
    for(int beat : beats){
        std::cout << beat << " ";
    }

    vector<int> test1 = {1, 2, 1};
    vector<int> test2 = {1, 2, 1};
    std::cout << "\nTest Equal: " << issame(test1, test2);

    vector<int> test3 = {1, 2, 1};
    vector<int> test4 = {1, 2, 3};
    std::cout << "\nTest Not Equal: " << issame(test3, test4);

    return 0;
}