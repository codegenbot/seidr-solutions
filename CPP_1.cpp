bool issame(const vector<string>& vec1, const vector<string>& vec2) {
    if (vec1.size() != vec2.size()) {
        return false;
    }

    for (size_t i = 0; i < vec1.size(); ++i) {
        if (vec1[i] != vec2[i]) {
            return false;
        }
    }

    return true;
}

vector<string> separate_paren_groups(string paren_string);

int main() {
    // Your main function code here
}

vector<string> separate_paren_groups(string paren_string) {
    // Your separate_paren_groups function code here
}