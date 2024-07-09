```cpp
vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int sum1 = 0;
    for (const auto& str : lst1) {
        sum1 += str.length();
    }
    
    int sum2 = 0;
    for (const auto& str : lst2) {
        sum2 += str.length();
    }

    if (sum1 < sum2)
        return lst1;
    else if (sum1 > sum2)
        return lst2;

    bool issame(vector<string> a, vector<string> b) {
        return (a == b);
    }
    
    vector<string> result = total_match(lst1, lst2);
    if(issame(result, lst1))
        return lst1;
    else
        return lst2;
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    return 0;
}