#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(auto s : strings) {
        if(s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;
}

int main() {
    vector<string> input = {"xxx", "asd", "xxy", "john doe", "xxxAaa", "xxx"};
    string prefix = "xxx";
    vector<string> expected = {"xxx", "xxxAAA", "xxx"};
    
    vector<string> output = filter_by_prefix(input, prefix);
    if (!issame(output, expected)) {
        cout << "Test failed" << endl;
        return 1;
    }
    cout << "Test passed" << endl;
    return 0;
}