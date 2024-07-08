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
    std::map<char,int> map1, map2;
    char ch;
    int num;

    //input for first map
    std::cout << "Enter elements for the first map. Enter 'q' when you are done.\n";
    while(true) {
        std::cin >> ch >> num;
        if(ch == 'q') break;
        map1[ch] = num;
    }

    //input for second map
    std::cout << "\nEnter elements for the second map. Enter 'q' when you are done.\n";
    while(true) {
        std::cin >> ch >> num;
        if(ch == 'q') break;
        map2[ch] = num;
    }

    //check if both maps are same
    if(issame(map1, map2)) {
        std::cout << "\nThe two maps are the same.\n";
    } else {
        std::cout << "\nThe two maps are not the same.\n";
    }

    return 0;
}