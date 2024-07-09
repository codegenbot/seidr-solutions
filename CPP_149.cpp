if (a.size() != b.size()) {
        return false;
    }
    
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    vector<string> lst1 = {"aba", "aa", "ad", "vcd", "baa"};
    vector<string> lst2 = {"aba", "aa", "ad", "vcd", "baa"};

    if (issame(lst1, lst2)) {
        cout << "The two lists are the same";
    } else {
        cout << "The two lists are different";
    }

    return 0;
}