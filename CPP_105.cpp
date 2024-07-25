#include <vector>
#include <string>

bool same(vector<string> a,vector<string>b){
    if(a.size()!=b.size()) return false;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]) return false;
    }
    return true;
}

void by_length(vector<int> arr, vector<string>& result) {
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            result.push_back(to_string(num));
        }
    }

    sort(result.begin(), result.end());

    reverse(result.begin(), result.end());
}

int main() {
    vector<int> input = {9, 4, 8};
    vector<string> output;
    by_length(input, output);
    assert(same(output , {"Nine", "Eight", "Four"}));
    return 0;
}