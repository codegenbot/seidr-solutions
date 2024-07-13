#include <string>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    string temp;
    for(int i=0; i<s.length();i++){
        if(s[i] == 'X'){
            score += 30;
        }
        else if(s[i] == '/'){
            if(temp.length() > 0){
                score += (temp.length() == 1)?stoi(temp)*10:stoi(temp[0])-0+'0'*9+10;
                temp = "";
            }
        }
        else{
            temp += s[i];
        }
    }
    if(temp.length() > 0){
        int lastFrame = stoi(temp);
        score += (lastFrame == 10)?20:lastFrame*2;
    }
    return score;