#include <vector>
#include <algorithm>
using namespace std;

bool issame(vector<string> a, vector<string>) {
    return (a.size() == 2 && a[0].empty() && a[1] == "True");
}

int main() {
    assert(issame(reverse_delete("mamma", "mia") , {"", "True"}));
    return 0;
}