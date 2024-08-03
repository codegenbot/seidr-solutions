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
    string temp;
    getline(cin, temp);
    size_t pos = 0;
    while ((pos = temp.find(" ")) != string::npos) {
        input.push_back(stoi(temp.substr(0, pos)));
        temp.erase(0, pos + 1);
    }
    if (!temp.empty()) {
        input.push_back(stoi(temp));
    }
    cout << "Sum of even numbers: " << add(input) << endl;
    return 0;
}