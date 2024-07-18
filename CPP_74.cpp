#include <vector>
#include <string>

bool issame(const vector<string>& a, const vector<string>& b){
    return a == b;
}

int main() {
    vector<string> a = {"apple", "banana", "cherry"};
    vector<string> b = {"apple", "banana", "cherry"};

    if (issame(a, b)) {
        cout << "Vectors a and b are the same";
    } else {
        cout << "Vectors a and b are different";
    }

    return 0;
}