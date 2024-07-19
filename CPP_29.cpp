#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

int main() {
    int n;
    cin >> n;

    vector<string> strings(n);
    for(int i = 0; i < n; i++){
        cin >> strings[i];
    }

    string prefix;
    cin >> prefix;

    vector<string> result = filter_by_prefix(strings, prefix);

    if(result.size() == 1 && issame({prefix}, result)){
        cout << "Yes" << endl;
    } else{
        cout << "No" << endl;
    }
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(auto s : strings){
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;
}