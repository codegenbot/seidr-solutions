#include <vector>
#include <string>
#include <cassert>

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) {
        return false;
    }
    
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

vector<vector<string>> by_length(const vector<int>& arr) {
    vector<vector<string>> result(10, vector<string>());
    
    for (int i : arr) {
        if(i >= 1 && i <= 9) {
            switch (i) {
                case 1:
                    result[1].push_back("One");
                    break;
                case 2:
                    result[2].push_back("Two");
                    break;
                case 3:
                    result[3].push_back("Three");
                    break;
                case 4:
                    result[4].push_back("Four");
                    break;
                case 5:
                    result[5].push_back("Five");
                    break;
                case 6:
                    result[6].push_back("Six");
                    break;
                case 7:
                    result[7].push_back("Seven");
                    break;
                case 8:
                    result[8].push_back("Eight");
                    break;
                case 9:
                    result[9].push_back("Nine");
                    break;
            }
        }
    }

    return result;
}

int main() {
    assert(issame(by_length({9, 4, 8}) , {"Nine", "Four", "Eight"}));
    return 0;
}