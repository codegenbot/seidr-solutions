int main() {
    if (sum1 < sum2) {
        vector<string> result;
        for (const auto& v : lst1) {
            for (const string& s : v) {
                result.push_back(s);
            }
        }
        return result;
    } else if (sum1 > sum2) {
        vector<string> result;
        for (const auto& v : lst2) {
            for (const string& s : v) {
                result.push_back(s);
            }
        }
        return result;
    } else {
        vector<string> result;
        for (const auto& v : lst1) {
            for (const string& s : v) {
                result.push_back(s);
            }
        }
        return result;
    }
}