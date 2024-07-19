#include <algorithm>
#include <string>
using namespace std;

int main() {
    string max = *max_element({"play", "play", "play"},
        [](const string& a, const string& b){
            if(a.size() == b.size()) return a < b;
            return a.size() > b.size();
        });
    cout << max << endl;
    return 0;
}