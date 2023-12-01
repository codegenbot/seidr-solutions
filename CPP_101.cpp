#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> words_string(string s)
{
    vector<string> words;
    string word;
    for (char c : s){
        if (c == ' ' || c == ','){
            if (!word.empty()){
                words.push_back(word);
                word.clear();
            }
        }
        else{
            word += c;
        }
    }
    if (!word.empty()){
        words.push_back(word);
    }
    return words;
}

bool isSame(vector<string> a, vector<string> b)
{
    if (a.size() != b.size()){
        return false;
    }
    for (int i = 0; i < a.size(); i++){
        if (a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main()
{
    assert(isSame(words_string("ahmed     , gamal"), {"ahmed", "gamal"}));
    cout << "Test case passed!" << endl;

    return 0;
}