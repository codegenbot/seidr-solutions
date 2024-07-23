#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

class MyString {
};

MyString concatenate(vector<MyString> strings){
    MyString result = "";
    for(auto str : strings) {
        result += str;
    }
    return result;
}

int main() {
    assert(concatenate({"x", "y", "z", "w", "k"}) == "xyzwk");
    return 0;
}