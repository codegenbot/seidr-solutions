```cpp
bool issame(vector<string> a, vector<string>b) {
    return a == b;
}

int main() {
    int num;
    cin >> num;

    vector<int> arr;
    for (int i = 1; i <= num; i++) {
        arr.push_back(i);
    }

    vector<string> by_length(vector<int> arr) {
        vector<int> nums;
        for (int i : arr) {
            if (i >= 1 && i <= 9) {
                nums.push_back(i);
            }
        }

        sort(nums.begin(), nums.end());
        reverse(nums.begin(), nums.end());

        vector<string> result;
        for (int num : nums) {
            string str = "";
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

    vector<string> res = by_length(arr);

    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << endl;
    }

    bool check = issame(res, by_length(arr));
    
    if(check) {
        cout << "The arrays are the same" << endl;
    } else {
        cout << "The arrays are not the same" << endl;
    }
    
    return 0;