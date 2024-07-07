#include<stdio.h>
#include<vector>
#include<string>
#include<map>
#include<algorithm>
using namespace std;

vector<string> by_length(vector<int> arr) {
    vector<int> temp;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            temp.push_back(num);
        }
    }

    sort(temp.begin(), temp.end());
    reverse(temp.begin(), temp.end());

    vector<string> result;
    for (int num : temp) {
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