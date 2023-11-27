#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> strange_sort_list(vector<int> lst){
    vector<int> result;
    sort(lst.begin(), lst.end());
    int left = 0;
    int right = lst.size() - 1;
    while(left <= right){
        result.push_back(lst[left]);
        if(left != right){
            result.push_back(lst[right]);
        }
        left++;
        right--;
    }
    return result;
}

int main() {
    vector<int> input = {5, 4, 3, 2, 1};
    vector<int> sorted = strange_sort_list(input);
    
    for(int num : sorted){
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}