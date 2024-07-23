#include <vector>
#include <string>

bool issame(vector<string> a, vector<string>b){
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size(); i++)
        if(a[i] != b[i])
            return false;
    return true;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
    std::vector<std::string> result;
    for(auto str : strings){
        if(str.find(substring) != std::string::npos){
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    vector<string> input_strings = {"Hello", "World", "HelloWorld", "Hi", "Hello"};
    string target_substring = "ello";
    
    vector<string> filtered_strings = filter_by_substring(input_strings, target_substring);

    if(issame(vector<string>(input_strings.begin(), input_strings.end()), filtered_strings)) {
        for(auto str : filtered_strings) {
            cout << str << endl;
        }
    } else {
        cout << "Strings were not the same." << endl;
    }

    assert (issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run") ,{"grunt", "prune"}));
    return 0;
}