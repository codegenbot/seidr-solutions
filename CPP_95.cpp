#include <map>
#include <string>

using namespace std;

bool check_dict_case(map<string, string> dict){
    if(dict.empty()) return false;

    bool isLower = true, isUpper = true;
    for(auto const& pair : dict) {
        string key = pair.first;
        for(char c : key) {
            if(islower(c)) {
                isUpper = false;
            } else if(isupper(c)) {
                isLower = false;
            }
        }
    }

    return isLower || isUpper;
}

int main(){
    assert(check_dict_case({}) == false);
    return 0;
}