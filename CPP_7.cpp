```cpp
#include <vector>
#include <string>

bool same(vector<string> a, vector<string> b);

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(auto str : strings) {
        if(str.find(substring) != std::string::npos)
            result.push_back(str);
    }
    return result;
}

int main(){
    int n;
    cin >> n;
    vector<string> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }
    string s1, s2;
    cin >> s1 >> s2;

    vector<string> res1 = filter_by_substring(vec, s1);
    vector<string> res2 = filter_by_substring(res1, s2);

    for(auto str : res2)
        cout << str << endl;

    return 0;
}