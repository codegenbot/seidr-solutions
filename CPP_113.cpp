#include <vector>
#include <string>

bool issame(vector<string> a,vector<string>b){
    return a==b;
}

vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (int i = 0; i < lst.size(); i++) {
        int count = 0;
        int num = stoi(lst[i]);
        while(num > 0){
            if(num % 2 != 0)
                count++;
            num /= 2;
        }
        result.push_back("the number of odd elements " + to_string(count) + " in the string " + std::to_string(i+1) + " of the input.");
    }
    return result;
}

int main() {
    assert(issame(odd_count({"271", "137", "314"}) , {"the number of odd elements 2 in the string 1 of the input.","the number of odd elements 1 in the string 2 of the input.","the number of odd elements 1 in the string 3 of the input."}));
    return 0;
}