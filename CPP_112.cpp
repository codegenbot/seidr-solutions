#include <vector>
#include <string>

using namespace std;

string reverse(string s) {
    string reversed = "";
    for (int i = s.length() - 1; i >= 0; --i)
        reversed += s[i];
    return reversed;
}

string delete_mia(string s) {
    return s.replace(s.find("mia"), 3, "");
}

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); ++i)
        if (a[i] != b[i])
            return false;
    return true;
}

vector<string> reverse_delete(string s, string t) {
    vector<string> result;
    string res = delete_mia(t);
    res = reverse(res);
    result.push_back(res);
    if (res.empty())
        result.push_back("True");
    else
        result.push_back("False");
    return result;
}

int main() {
    auto [result, isCorrect] = reverse_delete("mamma", "mia");
    vector<string> expectedResult = {"", "True"};
    assert(issame({result[0], result[1]}, expectedResult));  
    return 0;
}