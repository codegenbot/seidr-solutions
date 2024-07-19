#include<vector>
#include<string>

bool issame(vector<string> a,vector<string>b){
    if (a.size() != b.size()) {
        return false;
    }
    for(int i=0; i<a.size();i++){
        if(a[i] != b[i])return false;
    }
    return true;
}

vector<string> words_string(string s) {
    vector<string> result;
    string word = "";
    for (char c : s) {
        if (c == ' ' || c == ',') {
            if (!word.empty()) {
                result.push_back(word);
                word.clear();
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        result.push_back(word);
    }
    return result;
}

int main() {
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    vector<string> v = words_string(s);
    for(auto x:v)cout<<x<<" ";
    bool res=issame(words_string(s),v);
    if(res)
        cout<<"\nThe strings are same.\n";
    else
        cout<<"\nThe strings are not same.\n";
    return 0;
}