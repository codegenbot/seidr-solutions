#include <vector>
#include <string>
using namespace std;

std::string concatenate(vector<std::string> strings){
    std::string result = "";
    for(std::string s : strings) {
        result += s;
    }
    return result;
}