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
    vector<int> numbers = {4, 4, 6, 8};
    int result = add(numbers);
    cout << "Sum of even numbers: " << result << endl;
    return 0;
}