#include <vector>
#include <string>

bool issame(vector<string> a,vector<string>b){
    return a==b;
}

int main() {
    assert (issame(bf("Jupiter", "Makemake") , {}));
    return 0;
}