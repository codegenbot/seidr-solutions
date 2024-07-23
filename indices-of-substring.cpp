using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    for (int i = 0; ; i++) {
        size_t pos = text.find(target, i);
        if (pos == string::npos) break;
        result.push_back(pos);
        i = pos + 1;
    }
    return result;
}