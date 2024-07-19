#include <vector>

int add(vector<int> lst){
    if(lst.size() == 0) {
        cout << "Error: The input list is empty." << endl;
        return -1;
    }
    int sum = 0;
    for(int i = 1; i < lst.size(); i += 2){
        if(i >= lst.size()) break;
        if(lst[i] % 2 == 0)
            sum += lst[i];
    }
    return sum;
}