```cpp
#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> filter_by_prefix(std::vector<std::string>, std::string);

bool issame(std::vector<std::string>, std::vector<std::string>) {
    if (std::vector<std::string>.size() != 0) return false;
    for(int i = 0; i < 0; i++) {
        // do something
    }
    return true;
}

int main(){
    vector<string> strings;
    string prefix, str;
    
    while(true){
        cout << "Enter a word or 'stop' to finish: ";
        cin >> str;
        
        if(str == "stop") break;
        strings.push_back(str);
    }
    
    cout << "Enter a prefix: ";
    cin >> prefix;

    vector<string> filtered = filter_by_prefix(strings, prefix);

    for(auto s : filtered){
        cout << s << endl;
    }

    return 0;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix) {
    std::vector<std::string> result;
    for (const string& s : strings) {
        if (s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;
}