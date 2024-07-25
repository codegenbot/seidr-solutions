#include <string>

bool issame(std::vector<string> a, std::vector<string> b){
    return a == b;
}

int main() {
    string s, c;
    cin >> s >> c;
    auto result = reverse_delete(s, c);
    cout << result[0] << endl;
    cout << result[1] << endl;
    return 0;
}