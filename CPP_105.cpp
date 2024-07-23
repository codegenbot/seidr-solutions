#include <vector>
#include <string>

bool issame(std::vector<std::string> a,std::vector<std::string> b){
    if(a.size()!=b.size())return false;
    for(int i=0;i<a.size();i++){
        if(a[i] != b[i])return false;
    }
    return true;
}

std::vector<std::string> by_length(std::vector<int> lengths) {
    std::vector<std::string> result;
    for (int length : lengths) {
        switch (length) {
            case 1:
                result.push_back("One");
                break;
            case 4:
                result.push_back("Four");
                break;
            case 9:
                result.push_back("Nine");
                break;
            default:
                // Handle other lengths as needed
                break;
        }
    }
    return result;
}

int main() {
    assert(issame(by_length({1, 4, 9}), {"One", "Four", "Nine"}));
    return 0;
}