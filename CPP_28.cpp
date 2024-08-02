#include <vector>
#include <string>

string concatenate(vector<string> strings) {
    string result = "";
    for(auto s : strings) {
        result += s;
    }
    return result;
}

int main() {
    assert(concatenate({"x", "y", "z", "w", "k"}) == "xyzwk");
    return 0;
}