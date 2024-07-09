#include <vector>
#include <string>

// Define the filter_by_prefix function first
vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for (string str : strings) {
        if(str.find(prefix) == 0)
            result.push_back(str);
    }
    return result;
}

bool issame(vector<string> a, vector<string> b){
    // your logic to check if two vectors are the same
    return (a==b);
}

int main() {
    vector<string> strings = {"xxx", "asd", "xxy", "john doe", "xxxA", "xxx"};
    string prefix = "xxx";
    vector<string> expected = {"xxx", "xxxAAA", "xxx"};
    if(filter_by_prefix(strings, prefix) != expected) {
        cout << "Test failed. Expected: " << expected[0] << ", " << expected[1] << ", " << expected[2] << endl;
    } else {
        cout << "Test passed." << endl;
    }
    return 0;
}