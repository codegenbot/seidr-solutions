#include <string>
#include <cassert>

using namespace std;

int main() {
    string change_base(int x, int base){
        string result = "";
        while(x > 0){
            result = to_string(x % base) + result;
            x /= base;
        }
        return result;
    }

    // Additional code can be added here if needed

    return 0;
}