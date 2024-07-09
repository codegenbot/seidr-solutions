#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string>b){
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

vector<string> by_length(vector<int> arr) {
    vector<string> result;
    for (int i : arr) {
        switch (i) {
            case 1: result.push_back("One"); break;
            case 2: result.push_back("Two"); break;
            case 3: result.push_back("Three"); break;
            case 4: result.push_back("Four"); break;
            case 5: result.push_back("Five"); break;
            case 6: result.push_back("Six"); break;
            case 7: result.push_back("Seven"); break;
            case 8: result.push_back("Eight"); break;
            case 9: result.push_back("Nine"); break;
        }
    }
    return result;
}

int main() {
    vector<int> arr = {1, 2, 3};
    vector<string> output = by_length(arr);
    // Check if the output is as expected
    bool same = issame(output, {"One", "Two", "Three"});
    if(same) {
        cout << "The output is correct." << endl;
    } else {
        cout << "The output is incorrect." << endl;
    }
    return 0;
}