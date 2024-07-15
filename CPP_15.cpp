#include <string>
#include <iostream>

using namespace std;

string string_sequence(int n){
    string result;
    for(int i = 0; i <= n; ++i){
        result += to_string(i) + " ";
    }
    result.pop_back(); // Remove the extra space at the end
    return result;
}

int main(){
    int n;
    cin >> n;
    cout << string_sequence(n) << endl;

    return 0;
}