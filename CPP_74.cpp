bool issame(vector<string> a,vector<string>b){
    return (a==b);
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int sum1 = 0;
    for (const string& s : lst1) {
        sum1 += s.length();
    }

    int sum2 = 0;
    for (const string& s : lst2) {
        sum2 += s.length();
    }

    if (sum1 < sum2) {
        return lst1;
    } else if (sum1 > sum2) {
        return lst2;
    } else {
        return lst1;
    }
}

int main() {
    assert(issame(total_match({"this"}, {}), {""}));
    return 0;
}