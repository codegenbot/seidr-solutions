#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size())
        return false;

    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i])
            return false;
    }

    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(auto str : strings){
        if(str.find(prefix) == 0)
            result.push_back(str);
    }
    return result;

int test() {
    vector<string> input = {"xxx", "asd", "xxy", "john doe", "xxxA", "xxx"};
    string prefix = "xxx";
    vector<string> output = filter_by_prefix(input, prefix);
    bool result = issame(output, {"xxx", "xxxAAA"});
    if(result)
        std::cout << "The test passed" << std::endl;
    else
        std::cout << "The test failed" << std::endl;
    return 0;
}