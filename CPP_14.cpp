#include <string>
#include <vector>

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()){
        return false;
    }

    for(int i=0; i<a.size(); ++i){
        if(a[i] != b[i]){
            return false;
        }
    }

    return true;
}

vector<string> all_prefixes(string str){
    vector<string> result;
    for (int i = 1; i <= str.size(); ++i) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

int main(){
    string str1 = "hello";
    string str2 = "hel";
  
    vector<string> prefixes1 = all_prefixes(str1);
    vector<string> prefixes2 = all_prefixes(str2);

    if(issame(prefixes1, prefixes2)){
        cout << "Prefixes are the same" << endl;
    } else {
        cout << "Prefixes are different" << endl;
    }

    return 0;
}