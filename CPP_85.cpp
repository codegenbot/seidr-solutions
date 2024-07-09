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
    int num;

    cout << "Enter numbers (negative to stop): ";
    while(true){
        cin >> num;
        if(num < 0) break;
        lst.push_back(num);
    }

    cout << "Result: " << add(lst) << endl;
    return 0;
}