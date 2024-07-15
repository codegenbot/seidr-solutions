#include <string>
#include <vector>

bool issame(vector<string> a, vector<string> b);

void test_all_prefixes() {
    vector<string> result = all_prefixes("hello");
    assert(result.size() == 5);
    assert(result[0] == "h");
    assert(result[1] == "he");
    assert(result[2] == "hel");
    assert(result[3] == "hell");
    assert(result[4] == "hello");
}

vector<string> all_prefixes(string str){
    vector<string> prefixes;
    string prefix = "";
    for (char c : str) {
        prefix += c;
        prefixes.push_back(prefix);
    }
    return prefixes;
}

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

int main() {
    test_all_prefixes();
    vector<string> vec1 = {"apple", "banana", "cherry"};
    vector<string> vec2 = {"apple", "banana", "cherry"};
    assert(issame(vec1, vec2));
    return 0;
}