bool issame(const vector<string>& lst1, const vector<string>& lst2) {
        if (lst1.size() != lst2.size()) {
            return false;
        }
        for (size_t i = 0; i < lst1.size(); ++i) {
            if (lst1[i] != lst2[i]) {
                return false;
            }
        }
        return true;
    }

    int countChars(const vector<string>& lst1) {
        int count = 0;
        for (const string& str : lst1) {
            count += str.size();
        }
        return count;
    }

    vector<string> total_match(vector<string> lst1, vector<string> lst2);

    int main() {
        // Main function code here
        return 0;
    }