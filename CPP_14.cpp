#include <string>
#include <vector>

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); ++i){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

vector<string> all_prefixes(string str);

bool issame(vector<string> a, vector<string> b);

vector<string> all_prefixes(string str){
    vector<string> result;
    for (int i = 1; i <= str.size(); ++i) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

int main(){
    vector<string> prefixes = all_prefixes("coding");
    vector<string> prefixes2 = all_prefixes("programming");
    if (issame(prefixes, prefixes2)){
        cout << "The prefixes are same" << endl;
    } else {
        cout << "The prefixes are different" << endl;
    }
    return 0;
}