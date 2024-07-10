#include <vector>
using namespace std;

int add(vector<int> lst){
    int sum = 0;
    for(int i = 1; i < lst.size(); i += 2){
        if(lst[i] % 2 == 0) sum += lst[i];
    }
    return sum;

}

int main() {
    vector<int> lst;
    int n;
    
    cout << "Enter the number of elements: ";
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cout << "Enter element " << (i+1) << ": ";
        cin >> lst.push_back(i);
    }
    
    int result = add(lst);
    cout << "Sum of even elements: " << result;
}