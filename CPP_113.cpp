#include <iostream>
#include <vector>
#include <string>

namespace solution_name {
    using namespace std;

    vector<string> odd_count(vector<string> lst);

    vector<string> odd_count(vector<string> lst){
        vector<string> result;
        for(string s : lst){
            int count = 0;
            for(char c : s){
                if((c - '0') % 2 != 0){
                    count++;
                }
            }
            result.push_back("the number of odd elements " + to_string(count) + "\n the string " + s + " of the input.");
        }
        return result;
    }

    int main(){
        int n;
        cin >> n; // Reading the number of strings
        vector<string> input(n);
        for(int i = 0; i < n; ++i){
            cin >> input[i]; // Reading the strings
        }

        vector<string> output = solution_name::odd_count(input);
        
        for(string res : output){
            cout << res << endl; // Output the result
        }
        
        return 0;
    }
}

assert (issame(solution_name::odd_count({"271", "137", "314"}) , {