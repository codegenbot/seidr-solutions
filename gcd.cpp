vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> result;
    int index = 0;
    
    while ((index = text.find(target)) != string::npos) {
        result.push_back(index);
        if (text.size() > index + target.size()) {
            text.erase(0, index + target.size());
        } else {
            break;
        }
    }
    
    return result;
}

int greatestCommonDivisor(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return abs(a);
}