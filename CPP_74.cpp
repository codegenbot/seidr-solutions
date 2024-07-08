#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if(a.size()!=b.size())
        return false;
    for(int i=0;i<a.size();i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

int main() {
    int n;
    std::cin >> n;
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
        std::cout << "True";
    }else{
        std::cout << "False";
    }
    
}