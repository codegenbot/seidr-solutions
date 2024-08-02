```cpp
#include <vector>
#include <algorithm>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return equal(a.begin(), a.end(), b.begin());
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(auto str : strings) {
        if(str.find(substring) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    vector<string> strings1 = {"apple", "banana", "cherry"};
    vector<string> strings2 = {"banana", "cherry", "date"};

    vector<string> same_strings = filter_by_substring(strings1, "ba");
    if(same_strings.size() > 0) {
        cout << "Same strings in both vectors: ";
        for(auto str : same_strings) {
            cout << str << " ";
        }
        cout << endl;
    } else {
        cout << "No common strings found." << endl;
    }

    vector<string> intersection = vector<string>(std::set_intersection(same_strings.begin(), same_strings.end(),
                                                                      filter_by_substring(strings2, "ba").begin(),
                                                                      filter_by_substring(strings2, "ba").end(),
                                                                      same_strings.begin()));
    if(intersection.size() > 0) {
        cout << "Common strings in both vectors: ";
        for(auto str : intersection) {
            cout << str << " ";
        }
        cout << endl;
    } else {
        cout << "No common strings found." << endl;
    }

    return 0;
}