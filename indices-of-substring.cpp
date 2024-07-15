```cpp
#include <vector>
#include <string>
using namespace std;

int main() {
    string text = "Hello World";
    string target = "World";
    vector<int> res = indicesOfSubstring(text, target);
    // Now 'res' contains the indices of substring "World" in the given text.
}