#include <vector>
#include <string>

bool same(vector<string> a,vector<string>b){
    if(a.size()!=b.size()) return false;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]) return false;
    }
    return true;
}

void by_length(vector<int> arr, vector<string>& numbers) {
    numbers.clear();
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            numbers.push_back(to_string(num));
        }
    }

    sort(numbers.begin(), numbers.end());

    reverse(numbers.begin(), numbers.end());
}

int main() { 
    vector<string> result;
    by_length({9, 4, 8}, result);
    assert(same(result , {"Nine", "Eight", "Four"})); 
    return 0;
}