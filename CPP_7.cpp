#include <algorithm>
#include <set>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
    std::vector<std::string> result;
    for(auto str : strings) {
        if(str.find(substring) != std::string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    vector<string> input_strings;
    string substring;

    cout << "Enter the number of strings: ";
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        cout << "Enter string " << (i+1) << ": ";
        string s;
        cin >> s;
        input_strings.push_back(s);
    }

    cout << "Enter the substring: ";
    cin >> substring;

    vector<string> filtered = filter_by_substring(input_strings, substring);

    if(filtered.size() == 0) {
        cout << "No strings contain the given substring." << endl;
    } else {
        cout << "Strings containing the given substring:" << endl;
        for(auto s : filtered) {
            cout << s << endl;
        }
    }

    vector<string> set1(input_strings.begin(), input_strings.end());
    vector<string> set2(filtered.begin(), filtered.end());

    if(issame(set1, set2)) {
        cout << "The two sets are the same." << endl;
    } else {
        cout << "The two sets are not the same." << endl;

        set<string> set3(set1.begin(), set1.end());
        set<string> set4(set2.begin(), set2.end());

        vector<string> intersection;
        std::set_intersection(set3.begin(), set3.end(), set4.begin(), set4.end(),
                              back_inserter(intersection));

        if(intersection.size() > 0) {
            cout << "The intersection of the two sets is: ";
            for(auto s : intersection) {
                cout << s << " ";
            }
            cout << endl;
        } else {
            cout << "The intersection is empty." << endl;
        }
    }

    return 0;
}