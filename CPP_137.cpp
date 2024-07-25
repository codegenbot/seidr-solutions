#include <any>
#include <string>

std::string compare_one(const std::string& s, int i) {
    if (i > stoi(s)) {
        return s;
    } else if (i < stoi(s)) {
        return std::to_string(i);
    } else {
        return s;
    }
}

int main() {
    string a, b;
    cin >> a >> b;
    cout << compare_one(a,stoi(b)) << endl;
}