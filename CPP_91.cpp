```cpp
#include <string>
#include <iostream>

int is_bored(std::string S){
    int count = 0;
    std::string boredom = "I am bored";
    size_t pos = 0;
    while ((pos = S.find(" ", pos)) != std::string::npos) {
        if (S.substr(0, pos).compare(boredom) == 0) {
            count++;
            S = S.substr(pos + boredom.size());
            pos = 0;
        } else {
            pos++;
        }
    }
    return count;
}

int main() {
    std::string S; 
    cin >> S;
    int result = is_bored(S);
    cout << "Count: " << result << endl;
    return 0;
}