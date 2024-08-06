#include <iostream>
#include <string>

using namespace std;

string string_sequence(int n);

int main() {
    cout << string_sequence(10) << endl;
    return 0;
}

string string_sequence(int n){
    string result = "";
    for(int i=0; i<n; i++){
        result += to_string(i) + " ";
    }
    return result.substr(0, result.size()-1);
}