#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    int n;
    std::cout << "Enter the number of strings: ";
    std::cin >> n;

    vector<string> input_strings;
    for(int i = 0; i < n; i++) {
        string s;
        std::cout << "Enter string " << i+1 << ": ";
        std::getline(std::cin, s);
        input_strings.push_back(s);
    }

    vector<string> filter_input;
    string substring;
    std::cout << "Enter the substring: ";
    std::cin >> substring;

    for(string s : input_strings) {
        if(s.find(substring) != string::npos)
            filter_input.push_back(s);
    }

    vector<string> same_strings;
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j <= n-1; j++) {
            if(issame(vector<string>(input_strings.begin(), input_strings.begin()+i), 
                      vector<string>(input_strings.begin(), input_strings.begin()+j))) {
                same_strings.push_back("Strings at index " + to_string(i) + " and " + to_string(j));
            }
        }
    }

    std::cout << "Filtered strings: ";
    for(string s : filter_input)
        std::cout << s << " ";

    cout << endl;
    
    if(same_strings.size() > 0) {
        cout << "Same strings: ";
        for(string s : same_strings)
            cout << s << " ";
        cout << endl;
    }

    return 0;
}