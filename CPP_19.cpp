#include <algorithm>
#include <string>

using namespace std;

string sort_numbers(string numbers) {
    map<string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                {"eight", 8}, {"nine", 9}};
    vector<string> numVec;
    string temp;

    for (char &c : numbers) {
        if (c == ' ') {
            continue;
        }
        temp += c;
        bool found = false;
        for (auto it = numMap.begin(); it != numMap.end(); ++it) {
            if (it->first.find(temp) != string::npos) {
                numVec.push_back(it->first);
                found = true;
                break;
            }
        }
        temp.clear();
    }

    sort(numVec.begin(), numVec.end());

    return string(join(numVec, " "));
}

#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <iterator>

int main() {
    cout << sort_numbers("three one five") << endl;
    return 0;
}