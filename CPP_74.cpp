#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> vec2) {
    if (a.size() != vec2.size()) return false;
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != vec2[i]) return false;
    }
    return true;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int sum1 = 0, sum2 = 0;
    for (const auto& s : lst1) {
        sum1 += s.length();
    }
    for (const auto& s : lst2) {
        sum2 += s.length();
    }
    if (sum1 < sum2) return lst1;
    else if (sum1 > sum2) return lst2;
    else return lst1;
}

int main() {
    int b; // declare variable b
    vector<string> lst3, lst4;
    cin >> b;  // read value of 'b'
    
    string temp;
    for(int i = 0; i < b; i++) { 
        cin >> temp;
        if(i == 0) {
            lst1.push_back(temp);
        } else if(i == 1) {
            lst2.push_back(temp);
        } else if(i > 1) {
            if(issame(lst1, lst2)) {
                if(sum_match(total_match(lst1, lst2)) >= sum_match(lst3) && sum_match(total_match(lst1, lst2)) <= sum_match(lst4)) {
                    lst3 = total_match(lst1, lst2);
                } else {
                    lst4 = total_match(lst1, lst2);
                }
            } 
        }
    }
    
    if(!issame(lst1, lst2)) { // check if lists are the same
        cout << "The two lists are not identical." << endl;
    } else {
        if(sum_match(total_match(lst1, lst2)) >= sum_match(lst3) && sum_match(total_match(lst1, lst2)) <= sum_match(lst4)) {
            cout << "The total match list is the same as one of the lists: " << lst3[0] << endl;
        } else {
            cout << "The total match list is not the same as either of the lists." << endl;
        }
    }
    
    return 0; 
}