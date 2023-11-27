#include <vector>
#include <cmath> // Add this line

using namespace std;

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

bool issame(vector<int> a, vector<int> b){ // Fix the function signature
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}