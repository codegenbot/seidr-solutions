#include <vector>
#include <string>
#include <initializer_list>

bool issame(vector<string> a,vector<string> b){
    return (a==b);
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int sum1 = 0;
    for (const auto& str : lst1) {
        sum1 += str.length();
    }
    int sum2 = 0;
    for (const auto& str : lst2) {
        sum2 += str.length();
    }
    if (sum1 < sum2) return lst1;
    else if (sum1 > sum2) return lst2;
    else return {""}; // default is empty
}

int main() {
    assert (issame(total_match({"this"}, {}), {}));
    return 0;
}