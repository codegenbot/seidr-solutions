#include <string>

int is_bored(std::string S){
    int count = 0;
    std::string boredom = "I am bored";
    size_t pos = 0;
    while ((pos = S.find(" ", pos)) != std::string::npos) {
        if (S.substr(0, pos).compare(boredom) == 0) {
            count++;
            S.erase(0, pos + boredom.size());
            pos = S.find(" ", pos); // Update this line
        } else {
            pos++;
        }
    }
    return count;
}