#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

int main(){
    vector<string> a = {"apple", "banana", "cherry"};
    vector<string> b = {"apple", "banana", "cherry"};
    bool same = issame(a, b);
    if(same)
        cout << "The two vectors are the same." << endl;
    else
        cout << "The two vectors are not the same." << endl;
    return 0;
}