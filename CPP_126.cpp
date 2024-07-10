#include <vector>
#include <algorithm>

using namespace std;

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i-1] > lst[i]){
            return false;
        }
        else if(count(lst.begin(), lst.end(), lst[i]) > 1){
            return false;
        }
    }
    return true;

}
int main() {
    vector<int> lst;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        lst.push_back(temp);
    }
    cout << (is_sorted(lst) ? "True" : "False") << endl; 
}