```cpp
#include <vector>
#include <string>

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix){
    std::vector<std::string> result;
    for(std::string s : strings){
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++)
        if(a[i] != b[i])
            return false;
    return true;
}

int main(){
    std::vector<std::string> strings = {"apple", "banana", "applet"};
    std::vector<std::string> prefix_strings = filter_by_prefix(strings, "app");
    vector<string> b; // declaring 'b' as another vector of strings
    if(issame(strings, prefix_strings)) {
        cout << "The filtered strings are the same as the original list." << endl;
    } else {
        cout << "The filtered strings are different from the original list." << endl;
    }
    
    return 0;
}