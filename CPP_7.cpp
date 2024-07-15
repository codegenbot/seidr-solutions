#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    return a == b;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> arr, std::string substr){
    std::vector<std::string> result;
    for(const auto &str : arr){
        if(str.find(substr) != std::string::npos){
            result.push_back(str);
        }
    }
    return result;
}

int main(){
    std::vector<std::string> words = {"apple", "banana", "cherry", "date"};
    std::vector<std::string> filtered_words = filter_by_substring(words, "a");
    for(const auto &word : filtered_words){
        std::cout << word << " ";
    }
    return 0;
}