#include <vector>
#include <string>
#include <initializer_list>

bool issame(vector<string> a,vector<string>b){
    if(a.size()!=b.size())
        return false;
    for(int i=0;i<a.size();i++){
        if(std::strcmp(a[i].c_str(), b[i].c_str())!=0)
            return false;
    }
    return true;
}

int main() {
    vector<string> v1, v2;
    int total_match = 0;
    
    cout << "Enter number of strings: ";
    int n; cin >> n;
    
    for(int i=0;i<n;i++){
        string str;
        cout << "Enter string " << i+1 << ": ";
        cin >> str;
        v1.push_back(str);
    }
    
    for(int i=0;i<n;i++){
        string str;
        cout << "Enter string " << i+1 << ": ";
        cin >> str;
        v2.push_back(str);
    }
    
    if(issame(v1,v2))
        cout << "Both vectors have same strings.";
    else
        cout << "Vectors do not have the same strings.";
    return 0;
}