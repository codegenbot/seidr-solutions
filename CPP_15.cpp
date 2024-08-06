#include <iostream>
#include <string>

using namespace std;

string string_sequence(int n){
    string result = "";
    for(int i=0; i<=n; i++){
        result += to_string(i) + " ";
    }
    return result.substr(0, result.size()-1);
}

int main() {
    int n;
    cin >> n;
    cout << string_sequence(n) << endl;
    return 0;
}