#include <string>
using namespace std;

bool is_nested(string str) {
    int count = 0;
    for (char c : str) {
        if (c == '[') {
            count++;
        } else if (c == ']') {
            if (count > 0) {
                count--;
            } else {
                return true;
            }
        }
    }
    return false;

int main() {
    assert(is_nested("]]]]]]]]") == false);
    // Add more tests here...
    return 0;
}