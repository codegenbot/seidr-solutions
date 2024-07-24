#include <vector>
bool issame(vector<int> a,vector<int>b){
    return (a==b);
}

int main() {
    assert (issame(common({4, 3, 2, 8}, {}) , {}));
    // Rest of your code...
}