```cpp
#include <vector>
#include <algorithm>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(const auto& str1 : a) {
        int idx = distance(b.begin(), find(b.begin(), b.end(), str1));
        if(idx == b.end() || str1 != b.at(idx))return false;
    }
    return true;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int sum1 = 0;
    for (const auto& str : lst1) {
        sum1 += str.length();
    }
    
    int sum2 = 0;
    for (const auto& str : lst2) {
        sum2 += str.length();
    }
    
    if (sum1 < sum2) {
        return lst2; 
    } else if (sum1 > sum2) {
        return lst1;
    } else {
        if(issame(lst1, lst2))
            return lst1;
        else
            return lst2; 
    }
}

vector<string> testMain() {
    vector<string> vec1;
    vector<string> vec2;
    cout << "Enter strings for vec1 (separated by spaces): ";
    string temp;
    getline(cin, temp);
    size_t pos = 0;
    while ((pos = temp.find(" ")) != std::string::npos) {
        vec1.push_back(temp.substr(0, pos));
        temp.erase(0, pos + 1);
    }
    vec1.push_back(temp);

    cout << "Enter strings for vec2 (separated by spaces): ";
    getline(cin, temp);
    pos = 0;
    while ((pos = temp.find(" ")) != std::string::npos) {
        vec2.push_back(temp.substr(0, pos));
        temp.erase(0, pos + 1);
    }
    vec2.push_back(temp);

    return total_match(vec1,vec2);
}