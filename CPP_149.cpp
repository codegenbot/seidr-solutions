#include <bits/stdc++.h>
using namespace std;

bool issame(vector<string>, vector<string>);

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;
    
    // Remove strings with odd lengths from the list
    for (const string& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }
    
    // Sort the resulting list by length and then alphabetically
    sort(result.begin(), result.end(), 
         [](const string& a, const string& b) {
             if (a.length() != b.length()) {
                 return a.length() < b.length();
             } else {
                 return a < b;
             }
         });
    
    return result;
}

int main(){
    vector<string> list={"cat", "banana","apple", "fig"};
    vector<string> sorted=sorted_list_sum(list);
    cout<<"Sorted List: "<<endl;
    for(string s : sorted){
        cout<<s<<" ";
    }
    return 0;
}