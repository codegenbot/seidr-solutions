#include <iostream>
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
    vector<string> temp;
    for (int i : arr) {
        if (i >= 1 && i <= 9)
            temp.push_back(to_string(i));
    }
    sort(temp.begin(), temp.end());
    reverse(temp.begin(), temp.end());
    return temp;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    vector<int> arr(n);
    for(int i=0; i<n; i++){
        std::cout << "Enter element #"<<i+1<<": ";
        std::cin >> arr[i];
    }

    vector<string> result = by_length(arr);

    if(result.size() > 0) {
        std::cout << "Numbers in descending order with their names: ";
        for (int i : result)
            std::cout << i << " ";
        std::cout << std::endl;
    } else
        std::cout << "No numbers found." << std::endl;

    return 0;
}