```c++
#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++)
        if(a[i] != b[i])
            return false;
    return true;
}

int main(){
    std::vector<std::string> strings;
    std::cout << "Enter the number of strings: ";
    int n;
    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cout << "Enter string " << i+1 << ": ";
        std::string s;
        std::cin >> s;
        strings.push_back(s);
    }
    std::vector<std::string> result;
    std::string prefix;
    std::cout << "Enter the prefix: ";
    std::cin >> prefix;
    for(string s : strings){
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    std::cout << "Strings with prefix '" << prefix << "' are: \n";
    for(string s : filter_by_prefix(strings, prefix))
        std::cout << s << "\n";
    return 0;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(string s : strings){
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;
}