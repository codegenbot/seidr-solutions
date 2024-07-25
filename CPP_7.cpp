#include <vector>
#include <string>
#include <initializer_list>

bool issame(vector<string>, vector<string>) {
    return true;
}

int main() {
    bool result = issame({""}, {"a", "b"});
    return 0;
}