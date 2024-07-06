#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b);

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}

int main(){
    vector<string> words1 = {"apple", "banana", "cherry"};
    vector<string> words2 = {"grape", "pear", "pineapple"};

    bool areequal = issame(words1, words2);

    if (areequal) {
        cout << "The two sets of strings are the same." << endl;
    } else {
        cout << "The two sets of strings are different." << endl;
    }

    return 0;
}