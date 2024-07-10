#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<string> split_words(string input){
    if(input.empty()){
        return {"0"};
    }
    vector<string> words;
    string word = "";
    for(char c : input){
        if(c == ' '){
            words.push_back(word);
            word = "";
        } else {
            word += c;
        }
    }
    if(!word.empty()){
        words.push_back(word);
    }
    return words;
}

void assert_vector_equal(vector<string> a, vector<string> b){
    assert(a.size() == b.size());
    for(size_t i = 0; i < a.size(); ++i){
        assert(a[i] == b[i]);
    }
}

int main(){
    assert_vector_equal(split_words("") ,{"0"});
    assert_vector_equal(split_words("Hello World") ,{"Hello", "World"});
    assert_vector_equal(split_words("C++ is awesome") ,{"C++", "is", "awesome"});
    assert_vector_equal(split_words("123 456 789") ,{"123", "456", "789"});

    return 0;
}