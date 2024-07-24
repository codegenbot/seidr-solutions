#include <vector>
#include <algorithm>
using namespace std;

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<string> sorted_list_sum(vector<string> lst){
    lst.erase(remove_if(lst.begin(), lst.end(), [](const string& s){ return s.length() % 2 != 0; }), lst.end());
    sort(lst.begin(), lst.end(), [](const string& a, const string& b){
        if(a.length() == b.length()){
            return a < b;
        }
        return a.length() < b.length();
    });
    return lst;
}

int main(){
    // Call the function sorted_list_sum instead of issame
    vector<string> input = {"hello", "world", "cpp", "contest"};
    vector<string> result = sorted_list_sum(input);

    // Printing the sorted list
    for(string s : result){
        cout << s << " ";
    }

    return 0;
}