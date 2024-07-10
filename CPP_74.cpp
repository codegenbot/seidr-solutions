bool issame(const vector<string>& lst1, const vector<string>& lst2) {
        return lst1 == lst2;
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
        vector<string> lst1 = {"apple", "banana", "cherry"};
        vector<string> lst2 = {"apple", "banana", "cherry"};

        if (issame(lst1, lst2)) {
            cout << "Lists are the same" << endl;
        } else {
            cout << "Lists are different" << endl;
        }

        vector<string> result = total_match(lst1, lst2);

        for (const string& str : result) {
            cout << str << " ";
        }

        return 0;
    }

    vector<string> total_match(vector<string> lst1, vector<string> lst2) {
        if (countChars(lst1) < countChars(lst2)) {
            return lst1;
        }
        return lst2;
    }