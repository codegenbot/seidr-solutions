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

int main(){
    vector<int> lst;
    cout << "Enter numbers (separated by spaces): ";
    int num;
    while (cin >> num) {
        lst.push_back(num);
    }
    
    if(lst.size() == 0)
        cout << "List is empty!" << endl;
    else
        cout << "Result: " << add(lst) << endl;
    
    return 0;
}