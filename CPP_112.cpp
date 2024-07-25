#include <string>

bool issame(std::vector<string> a, std::vector<string> b){
    return a == b;
}

int main() {
    string s, c;
    cin >> s >> c;
    auto result = reverse_delete(s, c);
    for (const auto& str : result) {
        cout << str << " ";
    }
    return 0;
}