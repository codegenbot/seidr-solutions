vector<string> odd_count(vector<string> lst);

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(odd_count({"271", "137", "314"}), {
        "the number of odd elements 2n the str2ng 271 of the 271nput.",
        "the number of odd elements 3n the str3ng 137 of the 137nput.",
        "the number of odd elements 2n the str2ng 314 of the 314nput."
    }));
    return 0;
}

vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (string s : lst) {
        int count = 0;
        for (char c : s) {
            if ((c - '0') % 2 != 0) {
                count++;
            }
        }
        result.push_back("the number of odd elements " + to_string(count) + "n the str" + to_string(count) + "ng " + s + " of the " + to_string(count) + "nput.");
    }
    return result;
}