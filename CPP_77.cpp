```cpp
#include<cmath>
#include<cctype>

bool iscuber(int a){
    int i = 1;
    while (pow(i, 3) <= a) {
        if (pow(i, 3) == a) return true;
        i++;
    }
    return false;
}

int main() {
    int n; 
    cin>>n;
    if(iscuber(n)) cout << "True";
    else cout<<"False";
    
}