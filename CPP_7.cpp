#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}

int main() {
    int n;
    std::cout << "Enter the number of strings: ";
    std::cin >> n;

    vector<string> strings(n);
    for(int i = 0; i < n; i++){
        std::cout << "Enter string " << (i+1) << ": ";
        std::cin.ignore();
        getline(std::cin, strings[i]);
    }

    int m;
    std::cout << "Enter the number of substrings: ";
    std::cin >> m;

    vector<string> substrings(m);
    for(int i = 0; i < m; i++){
        std::cout << "Enter substring " << (i+1) << ": ";
        std::cin.ignore();
        getline(std::cin, substrings[i]);
    }

    string b;
    std::cout << "Enter the value of b: ";
    std::cin >> b;

    vector<string> filtered_strings = filter_by_substring(strings, b);

    for(string s : filtered_strings){
        bool same = false;
        for(string sub : substrings){
            if(s.find(sub) != string::npos){
                same = true;
                break;
            }
        }

        if(!same)
            cout << "String: " << s << endl;
    }

    return 0;
}