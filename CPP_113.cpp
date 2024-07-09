bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> count_odd_elements(vector<string> lst) {
    vector<string> result;
    for (string s : lst) {
        for (char c : s) {
            if ((c - '0') % 2 != 0) {
                result.push_back("the number of odd elements 1 in the string " + s + " of the input.");
                break;
            }
        }
    }
    return result;
}

int main() {
    assert(issame(count_odd_elements({"271", "137", "314"}), {
        "the number of odd elements 2 in the string 271 of the input.",
        "the number of odd elements 1 in the string 137 of the input.",
        "the number of odd elements 2 in the string 314 of the input."
    }));
}