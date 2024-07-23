```cpp
bool issame(vector<string> a, vector<string>b) {
    return a == b;
}

int main() {
    int n; 
    cin >> n;

    vector<int> arr;
    for(int i=0; i<n; i++) {
        int num;
        cin >> num;
        if(num >= 1 && num <= 9)
            arr.push_back(num);
    }

    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());

    vector<string> result;
    for (int num : arr) {
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

    vector<string> b; // Initialize an empty vector for the second list

    // Repeat the same process for the second list
    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());

    for (int num : arr) {
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
        b.push_back(str);
    }

    // Check if the two lists are same
    bool isSame = issame(result, b);

    cout << (isSame ? "True" : "False");
}