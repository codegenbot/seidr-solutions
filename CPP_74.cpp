vector<string> total_match(vector<string> lst1, vector<string> lst2);

int totalChars(int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += lst[i].size();
    }
    return total;
}

bool issame(vector<string> a, vector<string> b) {
    // Add your implementation here
    return true; // Placeholder, modify as needed
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    if (totalChars(lst1.size()) < totalChars(lst2.size())) {
        return lst1;
    }
    return lst2;
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    return 0;
}