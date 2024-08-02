```c++
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string>b) {
    if (a == b)
        return true;
    else
        return false;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<string> by_length(vector<int> arr) {
        vector<int> temp;
        for (int i : arr) {
            if (i >= 1 && i <= 9)
                temp.push_back(i);
        }
        sort(temp.begin(), temp.end());
        reverse(temp.begin(), temp.end());
        vector<string> result;
        for (int i : temp) {
            switch (i) {
                case 1:
                    result.push_back("One");
                    break;
                case 2:
                    result.push_back("Two");
                    break;
                case 3:
                    result.push_back("Three");
                    break;
                case 4:
                    result.push_back("Four");
                    break;
                case 5:
                    result.push_back("Five");
                    break;
                case 6:
                    result.push_back("Six");
                    break;
                case 7:
                    result.push_back("Seven");
                    break;
                case 8:
                    result.push_back("Eight");
                    break;
                case 9:
                    result.push_back("Nine");
                    break;
            }
        }
        return result;
    }

    vector<string> output = by_length(arr);
    
    if (issame(output, {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"})) {
        cout << "The numbers are in the correct order." << endl;
    } else {
        cout << "The numbers are not in the correct order." << endl;
    }

    return 0;
}