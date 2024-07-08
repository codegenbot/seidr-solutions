```cpp
#include <vector>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if(a.size()!=b.size())
        return false;
    for(int i=0;i<a.size();i++){
        if(std::strcmp(a[i].c_str(), b[i].c_str())!=0)
            return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<string> a(n);
    for (string &s : a) {
        cin >> s;
    }

    vector<string> b(n);
    for (string &s : b) {
        cin >> s;
    }

    bool total_match = issame(a, b);

    if(total_match){
        cout << "True";
    }else{
        cout << "False";
    }
}