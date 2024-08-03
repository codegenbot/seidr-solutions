```cpp
#include <vector>
using namespace std;

int add(vector<int> lst){
    int sum = 0;
    for(int i = 1; i < lst.size(); i += 2){
        if(lst[i] % 2 == 0)
            sum += lst[i];
    }
    return sum;
}

int main() {
    vector<int> input;
    cout << "Enter numbers (space separated): ";
    int num;
    while(cin >> num) {
        input.push_back(num);
        if(cin.peek() != ' ') {
            break;
        }
        cin.ignore();
    }
    cout << "Sum of even numbers: " << add(input) << endl;
    return 0;
}