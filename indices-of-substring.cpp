```cpp
vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    int pos = 0;

    while ((pos = text.find(target, pos)) != string::npos) {
        result.push_back(pos); 
        pos += m; // increment pos by the length of target
    }

    return result;
}