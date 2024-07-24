#include <vector>
#include <string>

void testConcatenate() {
    vector<string> strings = {"Hello", " ", "World!"};
    string result = concatenate(strings);
    assert(result == "Hello World!");
}

string concatenate(vector<string> strings){
    string result = "";
    for (const auto& str : strings) {
        result += str;
    }
    return result;
}