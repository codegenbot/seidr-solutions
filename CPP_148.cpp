```cpp
#include <vector>
#include <cctype>

using namespace std;

bool issame(const vector<string>& v1, const vector<string>& v2) {
    return v1.size() == v2.size() && equal(v1.begin(), v1.end(), v2.begin());
}

int main() {
    vector<string> a, b;
    cout << "Enter the two planets (separated by space): ";
    string line;
    getline(cin, line);

    size_t first = 0, last;
    while ((last = line.find(' ')) != string::npos) {
        a.push_back(line.substr(first, last - first));
        first = last + 1;
    }
    a.push_back(line.substr(first));

    line.clear();
    first = 0, last = 0;
    while ((last = line.find(' ')) != string::npos) {
        b.push_back(line.substr(first, last - first));
        first = last + 1;
    }
    b.push_back(line.substr(first));

    if (issame(a, b)) {
        cout << "The two planets are the same." << endl;
    } else {
        cout << "The two planets are different." << endl;
    }
}