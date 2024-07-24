#include <vector>
#include <string>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m; i++) {
        if (text.substr(i, m) == target) {
            result.push_back(i);
        }
    }

    return result;
}

vector<int> findIndices(string s, string t) {
    vector<int> indices;
    int len = s.length();
    int tar_len = t.length();

    for(int i=0; i <=len-tar_len;i++){
        if(s.substr(i,tar_len)==t){
            indices.push_back(i);
        }
    }

    return indices;
}