#include <vector>

namespace Contest {
    int solutions(const vector<int>& lst){
        using namespace std;
        int sum = 0;
        for(int i = 0; i < lst.size(); i += 2){
            if(lst[i] % 2 != 0){
                sum += lst[i];
            }
        }
        return sum;
    }
}