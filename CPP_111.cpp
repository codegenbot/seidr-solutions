#include <iostream>
#include <map>
#include <utility>

bool issame(std::map<char,int> a,std::map<char,int> b) {
    if(a.size()!=b.size())return false;
    for(auto p : a){
        if(b.find(p.first)==b.end()||b[p.first]!=p.second)return false;
    }
    return true;
}

int main() {
    std::map<char, int> m1;
    char c1; int i1;

    // Input from user
    std::cout << "Enter the number of characters: ";
    int n = 0; std::cin >> n;

    for(int i=0; i<n; i++) {
        std::cout << "Enter character " << (i+1) << ": ";
        std::cin >> c1;
        m1[c1] = i+1;
    }

    // Create another map
    std::map<char, int> m2;

    for(auto p : m1) {
        m2[p.first] = p.second;
    }

    // Call the function
    if(issame(m1,m2))
        std::cout << "Maps are same.\n";
    else
        std::cout << "Maps are not same.\n";

    return 0;
}