#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool issame(vector<string> a, vector<string> b);

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(const auto& str : strings){
        if(str.compare(0, prefix.length(), prefix) == 0){
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    // Test the filter_by_prefix function
    vector<string> input = {"apple", "banana", "apricot", "orange"};
    string prefix = "ap";
    vector<string> output = filter_by_prefix(input, prefix);

    // Print the filtered strings
    for (const auto& str : output) {
        cout << str << " ";
    }
        
    return 0;
}