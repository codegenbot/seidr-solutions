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
    cout << "Enter numbers (space-separated): ";
    string temp;
    getline(cin, temp);
    size_t start = 0;
    while ((start = temp.find(" ")) != string::npos) {
        input.push_back(stoi(temp.substr(0, start)));
        temp.erase(0, start + 1);
    }
    input.push_back(stoi(temp));
    cout << "Sum of even numbers: " << add(input) << endl;
    return 0;
}