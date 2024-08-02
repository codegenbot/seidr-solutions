#include <vector>
#include <string>

vector<string> all_prefixes(string str);

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> all_prefixes(string str){
    vector<string> result;
    string prefix = "";
    for(char c : str){
        prefix += c;
        result.push_back(prefix);
    }
    return result;
}

int main(){
    // Sample code to test the functions
    vector<string> prefixes = all_prefixes("coding");
    for(string prefix : prefixes){
        cout << prefix << " ";
    }
    cout << endl;

    return 0;
}