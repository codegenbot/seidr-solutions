```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<string> a,vector<string> b){
    if(a.size() != b.size())
        return false;

    for (int i = 0; i < a.size(); i++) {
        if (find(b.begin(), b.end(), a[i]) == b.end())
            return false;
    }

    return true;
}

int main(){
    int n;
    std::cin >> n;
    vector<string> a,b;

    for(int i=0;i<n;i++){
        string temp;
        cin>>temp;
        if(i<n/2) a.push_back(temp);
        else b.push_back(temp);
    }

    // Check if lists are same
    bool flag = issame(a, b);

    // Print the result
    if(flag) 
        std::cout << "Lists are same.\n";
    else    
        std::cout << "Lists are not same.\n";

    return 0;
}