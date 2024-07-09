```cpp
#include <iostream>
#include <string>

bool is_happy(const std::string& s);

int main() {
    assert(is_happy("iopaxioi") == false );
    return 0;
}

bool is_happy(const std::string& s) {
    bool visited[100] = {false};
    int n = s.length();
    int i = 0;
    while (i < n) {
        if (!visited[int(s[i]) - '0']) {
            int temp = int(s[i]) - '0';
            while (temp != 1 && !visited[temp]) {
                visited[temp] = true;
                temp = (temp % 10 + (temp / 10 * 10)) % 10;
            }
            if (temp == 1) return true;
            else if (visited[int(s[i]) - '0']) return false;
        }
        i++;
    }
    return true;
}