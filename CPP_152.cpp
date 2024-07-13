#include <vector>
#include <iostream>
using namespace std;

// Function to compare two vectors
bool compare(vector<int> a, vector<int> b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++)
        if(a[i] != b[i])
            return false;
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<int> game(n), guess(n);
    for(int i = 0; i < n;i++){
        cin >> game[i] >> guess[i];
    }
    
    if(!compare({game[0],guess[0]}, {2,0,0,1})) {
        cout << "Error: Invalid input. Please check your input again." << endl;
    } else {
        // implement your getResult function here
        vector<int> res = getResult(game,guess);
        for(auto x:res)cout << x << " ";
        cout << endl; 
    }
    
    return 0;
}