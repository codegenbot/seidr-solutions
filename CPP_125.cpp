#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

int count_odd_letters(string txt) {
    int count = 0;
    for (int i = 0; i < txt.length(); i++) {
        if (islower(txt[i])) {
            int letterOrder = txt[i] - 'a';
            if (letterOrder % 2 != 0) {
                count++;
            }
        }
    }
    return count;
}

vector<string> split_words(string txt) {
    vector<string> result;
    string word = "";
    bool hasWhitespace = false;
    bool hasComma = false;
    
    for (int i = 0; i < txt.length(); i++) {
        if (txt[i] == ' ') {
            hasWhitespace = true;
            if (word != "") {
                result.push_back(word);
                word = "";
            }
        }
        else if (txt[i] == ',') {
            hasComma = true;
            if (word != "") {
                result.push_back(word);
                word = "";
            }
        }
        else {
            word += txt[i];
        }
    }
    
    if (word != "") {
        result.push_back(word);
    }
    
    if (!hasWhitespace && !hasComma) {
        result.push_back(to_string(count_odd_letters(txt)));
    }
    
    return result;
}

int main() {
    assert(issame(split_words(""), {"0"}));
    assert(issame(split_words("hello world"), {"hello", "world"}));
    assert(issame(split_words("apple,banana,orange"), {"apple", "banana", "orange"}));
    assert(issame(split_words("hello123world"), {"hello123world"}));
    assert(issame(split_words("a b c d e"), {"a", "b", "c", "d", "e"}));
    assert(issame(split_words("hello,world"), {"hello", "world"}));
    assert(issame(split_words("hello world,"), {"hello", "world"}));
    assert(issame(split_words("hello,world,"), {"hello", "world"}));
    assert(issame(split_words("hello,world,,"), {"hello", "world"}));
    assert(issame(split_words("hello,world,123"), {"hello", "world", "123"}));
    assert(issame(split_words("hello,world,123,"), {"hello", "world", "123"}));
    assert(issame(split_words("hello,world,123,,"), {"hello", "world", "123"}));
    assert(issame(split_words("hello,world,123,456"), {"hello", "world", "123", "456"}));
    assert(issame(split_words("hello,world,123,456,"), {"hello", "world", "123", "456"}));
    assert(issame(split_words("hello,world,123,456,,"), {"hello", "world", "123", "456"}));
    assert(issame(split_words("hello,world,123,456,789"), {"hello", "world", "123", "456", "789"}));
    assert(issame(split_words("hello,world,123,456,789,"), {"hello", "world", "123", "456", "789"}));
    assert(issame(split_words("hello,world,123,456,789,,"), {"hello", "world", "123", "456", "789"}));
    assert(issame(split_words("hello,world,123,456,789,abc"), {"hello", "world", "123", "456", "789", "abc"}));
    assert(issame(split_words("hello,world,123,456,789,abc,"), {"hello", "world", "123", "456", "789", "abc"}));
    assert(issame(split_words("hello,world,123,456,789,abc,,"), {"hello", "world", "123", "456", "789", "abc"}));
    assert(issame(split_words("hello,world,123,456,789,abc,def"), {"hello", "world", "123", "456", "789", "abc", "def"}));
    assert(issame(split_words("hello,world,123,456,789,abc,def,"), {"hello", "world", "123", "456", "789", "abc", "def"}));
    assert(issame(split_words("hello,world,123,456,789,abc,def,,"), {"hello", "world", "123", "456", "789", "abc", "def"}));
    assert(issame(split_words("hello,world,123,456,789,abc,def,ghi"), {"hello", "world", "123", "456", "789", "abc", "def", "ghi"}));
    assert(issame(split_words("hello,world,123,456,789,abc,def,ghi,"), {"hello", "world", "123", "456", "789", "abc", "def", "ghi"}));
    assert(issame(split_words("hello,world,123,456,789,abc,def,ghi,jkl"), {"hello", "world", "123", "456", "789", "abc", "def", "ghi", "jkl"}));
    assert(issame(split_words("hello,world,123,456,789,abc,def,ghi,jkl,"), {"hello", "world", "123", "456", "789", "abc", "def", "ghi", "jkl"}));
    assert(issame(split_words("hello,world,123,456,789,abc,def,ghi,jkl,mno"), {"hello", "world", "123", "456", "789", "abc", "def", "ghi", "jkl", "mno"}));
    assert(issame(split_words("hello,world,123,456,789,abc,def,ghi,jkl,mno,"), {"hello", "world", "123", "456", "789", "abc", "def", "ghi", "jkl", "mno"}));
    assert(issame(split_words("hello,world,123,456,789,abc,def,ghi,jkl,mno,pqr"), {"hello", "world", "123", "456", "789", "abc", "def", "ghi", "jkl", "mno", "pqr"}));
    assert(issame(split_words("hello,world,123,456,789,abc,def,ghi,jkl,mno,pqr,"), {"hello", "world", "123", "456", "789", "abc", "def", "ghi", "jkl", "mno", "pqr"}));
    assert(issame(split_words("hello,world,123,456,789,abc,def,ghi,jkl,mno,pqr,stu"), {"hello", "world", "123", "456", "789", "abc", "def", "ghi", "jkl", "mno", "pqr", "stu"}));
    assert(issame(split_words("hello,world,123,456,789,abc,def,ghi,jkl,mno,pqr,stu,"), {"hello", "world", "123", "456", "789", "abc", "def", "ghi", "jkl", "mno", "pqr", "stu"}));
    assert(issame(split_words("hello,world,123,456,789,abc,def,ghi,jkl,mno,pqr,stu,vwx"), {"hello", "world", "123", "456", "789", "abc", "def", "ghi", "jkl", "mno", "pqr", "stu", "vwx"}));
    assert(issame(split_words("hello,world,123,456,789,abc,def,ghi,jkl,mno,pqr,stu,vwx,"), {"hello", "world", "123", "456", "789", "abc", "def", "ghi", "jkl", "mno", "pqr", "stu", "vwx"}));
    assert(issame(split_words("hello,world,123,456,789,abc,def,ghi,jkl,mno,pqr,stu,vwx,yz"), {"hello", "world", "123", "456", "789", "abc", "def", "ghi", "jkl", "mno", "pqr", "stu", "vwx", "yz"}));
    assert(issame(split_words("hello,world,123,456,789,abc,def,ghi,jkl,mno,pqr,stu,vwx,yz,"), {"hello", "world", "123", "456", "789", "abc", "def", "ghi", "jkl", "mno", "pqr", "stu", "vwx", "yz"}));
    
    return 0;
}