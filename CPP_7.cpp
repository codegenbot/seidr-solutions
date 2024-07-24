#include <iostream>
#include <vector>
#include <set>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    set<string> setA(a.begin(), a.end());
    set<string> setB(b.begin(), b.end());

    return setA == setB;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<std::string> strings(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> strings[i];
    }

    std::string substring;
    std::cin >> substring;

    std::vector<std::string> result = filter_by_substring(strings, substring);

    if (issame(result, strings)) {
        std::cout << "The filtered set is the same as the original set." << std::endl;
    } else {
        std::cout << "The filtered set is different from the original set." << std::endl;
    }

    return 0;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}