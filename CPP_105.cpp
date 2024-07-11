```cpp
#include <vector>
#include <algorithm>

bool issame(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    if(v1.size() != v2.size()) return false;
    for(int i=0; i<v1.size(); ++i) {
        if(v1[i] != v2[i]) return false;
    }
    return true;
}

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<int> numbers;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            numbers.push_back(num);
        }
    }

    sort(numbers.begin(), numbers.end());
    reverse(numbers.begin(), numbers.end());

    std::vector<std::string> result;
    for (int num : numbers) {
        std::string str = "";
        switch (num) {
            case 1:
                str = "One";
                break;
            case 2:
                str = "Two";
                break;
            case 3:
                str = "Three";
                break;
            case 4:
                str = "Four";
                break;
            case 5:
                str = "Five";
                break;
            case 6:
                str = "Six";
                break;
            case 7:
                str = "Seven";
                break;
            case 8:
                str = "Eight";
                break;
            case 9:
                str = "Nine";
                break;
        }
        result.push_back(str);
    }

    return result;
}

int main() {
    std::vector<int> test = {1, 2, 3};
    std::vector<std::string> res = by_length(test);
    for(auto x:res) cout<<x<<" ";
    cout<<endl;
    
    // check if the function returns same strings 
    vector<string> v1 = by_length({9,8,7});
    vector<string> v2 = by_length({1,1,1});
    if(issame(v1,v2)) {
        cout<<"vectors are equal";
    }
    else {
        cout<<"vectors are not equal";
    }

}