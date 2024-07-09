#include <vector>

int main() {
    std::vector<int> lst;
    int input;
    
    while (true) {
        cin >> input;
        if (input == -1) {
            break;
        }
        lst.push_back(input);
    }
    
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (i % 2 == 0 && lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    cout << "Sum: " << sum << endl;
    
    return 0;
}