#include <vector>
using namespace std;

int solution(vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    vector<int> lst;
    cout << "Enter some integers separated by spaces: ";
    int n, num;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> num;
        lst.push_back(num);
    }
    
    int result = solution(lst);
    cout << "Sum of odd numbers is: " << result << endl;
    
    return 0;
}