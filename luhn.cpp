```c
#include <vector>

int luhn(const std::vector<int>& card) {
    int sum = 0;
    for(int i = 0; i < card.size(); i++) {
        if(i % 2 == 1) {
            int doubled = card[i] * 2;
            if(doubled > 9) {
                doubled -= 9;
            }
            sum += doubled;
        } else {
            sum += card[i];
        }
    }
    return sum;
}

int main() {
    std::vector<int> card = {4, 5, 3, 9, 2, 6, 5, 1, 7, 8, 1, 6, 7, 2, 3, 9};
    int result = luhn(card);
    return 0;
}