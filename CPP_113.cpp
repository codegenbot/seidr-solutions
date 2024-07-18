#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for(string s : lst){
        int count = 0;
        for(char c : s){
            if((c - '0') % 2 != 0){
                count++;
            }
        }
        result.push_back("the number of odd elements " + to_string(count) + "\n the string " + s + " of the input.");
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<string> lst(n);
    for(int i=0; i<n; i++){
        cin >> lst[i];
    }

    vector<string> result = odd_count(lst);

    for(string s : result){
        cout << s << endl;
    }

    return 0;
}