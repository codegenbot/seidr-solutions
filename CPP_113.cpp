#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b);

vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for(int i=0; i<lst.size(); i++){
        int count = 0;
        for(int j=0; j<lst[i].size(); j++){
            if((lst[i][j] - '0') % 2 != 0){
                count++;
            }
        }
        result.push_back("the number of odd elements " + to_string(count) + " in the string " + to_string(i+1) + " of the input.");
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    // Implementation of issame function
}

int main() {
    // Main function logic
    return 0;
}