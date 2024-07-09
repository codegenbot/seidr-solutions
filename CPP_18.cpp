```cpp
#include <string>
#include <cassert> 
using namespace std;

int how_many_times(const string& str, const string& substring) {
    int count = 0;
    size_t pos = 0;
    string s = str; 
    while ((pos = s.find(substring)) != string::npos) {
        count++;
        s.erase(pos, substring.length());
    }
    return count;

}

int main() {
    assert(how_many_times("john doe", "john") == 1);
}