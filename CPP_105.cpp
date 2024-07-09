#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return (a.size() == b.size()) && all_of(a.begin(), a.end(), [&](const string& s){return find(b.begin(), b.end(), s) != b.end();});
}

vector<string> by_length(vector<int> arr) {
    vector<string> temp;
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            switch (i) {
                case 1: temp.push_back("One"); break;
                case 2: temp.push_back("Two"); break;
                case 3: temp.push_back("Three"); break;
                case 4: temp.push_back("Four"); break;
                case 5: temp.push_back("Five"); break;
                case 6: temp.push_back("Six"); break;
                case 7: temp.push_back("Seven"); break;
                case 8: temp.push_back("Eight"); break;
                case 9: temp.push_back("Nine"); break;
            }
        }
    }

    sort(temp.begin(), temp.end());
    reverse(temp.begin(), temp.end());

    return temp;
}

int main() {
    assert(issame(by_length({9, 4, 8}) , {"Nine", "Eight", "Four"}));
    return 0;
}