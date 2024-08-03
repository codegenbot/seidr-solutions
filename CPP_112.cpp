```cpp
bool same(vector<string> a,vector<string>b){
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++)
        if(a[i] != b[i])
            return false;
    return true;
}

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    for (int i = 0; i < s.length(); i++) {
        if (find(c.begin(), c.end(), s[i]) == c.end()) {
            temp += s[i];
        }
    }
    result.push_back(temp);
    bool isPalindrome = true;
    int left = 0, right = temp.length() - 1;
    while (left < right) {
        if (temp[left] != temp[right]) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }
    result.push_back(to_string(isPalindrome));
    return result;
}

int main() {
    assert(same(reverse_delete("mamma", "mia"), {"" , "True"}));
}