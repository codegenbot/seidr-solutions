using namespace std;

bool issame(vector<string> a) {
    if (a.size() == 0) return true;
    for (int i = 1; i < a.size(); i++) {
        if (a[i] != a[0]) return false;
    }
    return true;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int sum1 = 0;
    for (const auto& s : lst1) {
        sum1 += s.size();
    }
    int sum2 = 0;
    for (const auto& s : lst2) {
        sum2 += s.size();
    }
    if (sum1 < sum2) return lst1;
    else if (sum1 > sum2) return lst2;
    else if (!issame({lst1, lst2})) return lst1;
    else return lst2;
}

int main() {
    assert(issame({"this"}));
    return 0;
}