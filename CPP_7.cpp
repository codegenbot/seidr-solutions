#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
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
    std::vector<std::string> input_strings = {"Hello", "World", "HelloWorld", "Hi", "Hello"};
    std::string target_substring = "ello";
    
    std::vector<std::string> filtered_strings = filter_by_substring(input_strings, target_substring);

    if(issame(input_strings, filtered_strings)) {
        for(auto str : filtered_strings) {
            std::cout << str << std::endl;
        }
    } else {
        std::cout << "Strings were not the same." << std::endl;
    }

    return 0;
}