#include <string>
using namespace std;

class HowManyTimes {
public:
    int operator()(string str, string substring) {
        int count = 0;
        size_t pos = 0;

        while ((pos = str.find(substring)) != string::npos) {
            count++;
            str.erase(pos, substring.length());
        }

        return count;
    }
};

int main() {
    HowManyTimes hm;
    assert(hm("john doe", "john") == 1);
}