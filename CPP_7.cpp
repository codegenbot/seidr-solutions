#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<std::string> strings(n);
    for (int i = 0; i < n; i++) {
        std::cin >> strings[i];
    }

    std::vector<std::string> filter_by_substring(vector<string> strings, string substring){
        vector<string> result;
        for(string s : strings){
            if(s.find(substring) != string::npos)
                result.push_back(s);
        }
        return result;
    }

    int m;
    std::cin >> m;

    std::vector<std::string> v1(m);
    for (int i = 0; i < m; i++) {
        std::cin >> v1[i];
    }

    vector<string> a, b;
    a = filter_by_substring(strings, "hello");
    b = filter_by_substring(v1, "world");

    if(issame(a,b))
        std::cout << "The two lists are the same.\n";
    else
        std::cout << "The two lists are not the same.\n";

    return 0;
}