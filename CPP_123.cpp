```cpp
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result;
    while (n != 1) {
        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;
        if (n % 2 != 0)
            result.push_back(n);
    }
    sort(result.begin(), result.end());
    return result;
}

int main() {
    for(int i=1;i<=100;i++) {
        vector<int> temp=get_odd_collatz(i);
        bool unique=true;
        for(auto x:temp) {
            if(count(temp.begin(),temp.end(),x)>1) {
                unique=false;
                break;
            }
        }
        if(unique) {
            cout<<"Chain for "<<i<<" is unique"<<endl;
        } else {
            cout<<"Chain for "<<i<<" is not unique"<<endl;
        }
    }
}