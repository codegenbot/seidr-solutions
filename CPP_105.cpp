#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return (a.size() == b.size()) && all_of(a.begin(), a.end(), [&](const string& s){return find(b.begin(), b.end(), s) != b.end();});
}

vector<string> by_length(vector<int> arr) {
    vector<string> result;
    for (int i : arr) {
        switch (i) {
            case 1: result.push_back("One"); break;
            case 2: result.push_back("Two"); break;
            case 3: result.push_back("Three"); break;
            case 4: result.push_back("Four"); break;
            case 5: result.push_back("Five"); break;
            case 6: result.push_back("Six"); break;
            case 7: result.push_back("Seven"); break;
            case 8: result.push_back("Eight"); break;
            case 9: result.push_back("Nine"); break;
        }
    }

    vector<int> temp;
    for (string s : result) {
        switch (s[0] - '0') {
            case 1: temp.push_back(1); break;
            case 2: temp.push_back(2); break;
            case 3: temp.push_back(3); break;
            case 4: temp.push_back(4); break;
            case 5: temp.push_back(5); break;
            case 6: temp.push_back(6); break;
            case 7: temp.push_back(7); break;
            case 8: temp.push_back(8); break;
            case 9: temp.push_back(9); break;
        }
    }

    sort(temp.begin(), temp.end());
    reverse(temp.begin(), temp.end());

    vector<string> output;
    for (int i : temp) {
        switch (i) {
            case 1: output.push_back("One"); break;
            case 2: output.push_back("Two"); break;
            case 3: output.push_back("Three"); break;
            case 4: output.push_back("Four"); break;
            case 5: output.push_back("Five"); break;
            case 6: output.push_back("Six"); break;
            case 7: output.push_back("Seven"); break;
            case 8: output.push_back("Eight"); break;
            case 9: output.push_back("Nine"); break;
        }
    }

    return output;
}

int main() {
    assert(issame(by_length({9, 4, 8}) , {"Nine", "Eight", "Four"}));
    return 0;
}