#include <iostream>
#include <vector>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<int> compare(vector<int> game, vector<int> guess){
    vector<int> result;
    for(int i=0; i<game.size(); i++){
        if(game[i] == guess[i]){
            result.push_back(0);
        }
        else{
            result.push_back(abs(game[i] - guess[i]));
        }
    }
    return result;
}

int main(){
    vector<int> game = {1, 2, 3, 4};
    vector<int> guess = {2, 2, 2, 4};
    vector<int> result = compare(game, guess);

    if(issame(result, {1, 0, 1, 0})){
        cout << "Result is correct!" << endl;
    }
    else{
        cout << "Result is incorrect!" << endl;
    }

    return 0;
}