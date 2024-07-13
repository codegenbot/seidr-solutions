#include <vector>
#include <iostream>
using namespace std;

// Function to compare two vectors
bool compare(vector<int> a, vector<int> b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size();i++)
        if(a[i] != b[i])
            return false;
    return true;
}

vector<int> getResult(vector<int> game, vector<int> guess) {
    vector<int> res;
    for(int i = 0; i < game.size();i++){
        if(game[i] == guess[i])res.push_back(10);
        else if(find(guess.begin(),guess.end(),game[i]) != guess.end())res.push_back(5);
        else res.push_back(0);
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> game(n), guess(n);
    for(int i = 0; i < n;i++){
        cin >> game[i] >> guess[i];
    }
    
    if(!compare(game[0],guess[0])) {
        cout << "Error: Invalid input. Please check your input again." << endl;
    } else {
        vector<int> res = getResult(game,guess);
        for(auto x:res)cout << x << " ";
        cout << endl; 
    }
    
    return 0;
}