#include <iostream> // Include the necessary header file

using namespace std;

// Declare the fix_spaces function before using it
string fix_spaces(string text);

int main() {
    // Test the fix_spaces function
    assert(fix_spaces("   Exa 1 2 2 mple") == "-Exa_1_2_2_mple");
    return 0;
}

string fix_spaces(string text) {
    int n = text.length();
    string result = "";
    int count = 0;
    for(int i = 0; i < n; i++){
        if(text[i] == ' '){
            count++;
            if(count > 2){
                result += "-";
                count = 0;
            }
        }
        else{
            if(count > 0){
                result += "_";
                count = 0;
            }
            result += text[i];
        }
    }
    return result;
}