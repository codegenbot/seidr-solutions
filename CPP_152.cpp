#include <iostream>
#include <vector>

using namespace std;

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        int diff = abs(guess[i] - game[i]);
        result.push_back(diff);
    }
    return result;
}

bool issame(vector<int> game, vector<int> guess) {
    if(game == guess)
        return true;
    else
        return false;
}

int main() {
    vector<int> game;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        int x;
        cout << "Enter element " << i+1 << ": ";
        cin >> x;
        game.push_back(x);
    }
    
    vector<int> guess;
    cout << "\nEnter the number of elements: ";
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        int x;
        cout << "Enter element " << i+1 << ": ";
        cin >> x;
        guess.push_back(x);
    }
    
    vector<int> res = compare(game, guess);
    
    if(issame(game, guess)) {
        cout << "\nGuess is same as game.\n";
    } else {
        cout << "\nGame and Guess are different.\n";
    }
    
    for(int i = 0; i < n; i++) {
        cout << "Difference at position " << i+1 << ": " << res[i] << endl;
    }
    
    return 0;
}