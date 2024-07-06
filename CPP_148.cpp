#include <vector>
#include <string>

using namespace std;

std::vector<std::string> bf(std::string a, std::string b) {
    // Define the function body here
}

bool issame(vector<string> a, vector<string> b){
    for (int i = 0; i < a.size(); i++) {
        if (find(b.begin(),b.end(),a[i]) == b.end()) {
            return false;
        }
    }
    return true;
}