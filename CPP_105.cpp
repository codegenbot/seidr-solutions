#include <vector>
#include <string>

bool issame(vector<string> a,vector<string>b){
    if(a.size()!=b.size()) return false;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]) return false;
    }
    return true;
}

vector<string> by_length(vector<int> arr) {
    vector<string> result;
    for (int num : arr) {
        string str = to_string(num);
        if (str.length() == 1) {
            switch (num) {
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
            }
        } else {
            string temp = "Zero";
            if (num >= 10 && num <= 19) {
                switch (num) {
                    case 10:
                        temp = "Ten";
                        break;
                    case 11:
                        temp = "Eleven";
                        break;
                    case 12:
                        temp = "Twelve";
                        break;
                    case 13:
                        temp = "Thirteen";
                        break;
                    case 14:
                        temp = "Fourteen";
                        break;
                    case 15:
                        temp = "Fifteen";
                        break;
                    case 16:
                        temp = "Sixteen";
                        break;
                    case 17:
                        temp = "Seventeen";
                        break;
                    case 18:
                        temp = "Eighteen";
                        break;
                    case 19:
                        temp = "Nineteen";
                }
            } else if (num >= 20 && num <= 99) {
                string tens = "";
                switch (num / 10) {
                    case 2:
                        tens = "Twenty";
                        break;
                    case 3:
                        tens = "Thirty";
                        break;
                    case 4:
                        tens = "Forty";
                        break;
                    case 5:
                        tens = "Fifty";
                        break;
                    case 6:
                        tens = "Sixty";
                        break;
                    case 7:
                        tens = "Seventy";
                        break;
                    case 8:
                        tens = "Eighty";
                        break;
                    case 9:
                        tens = "Ninety";
                }
                if (num % 10 != 0) {
                    temp = tens + "-" + to_string(num % 10);
                } else {
                    temp = tens;
                }
            } else if (num >= 100 && num <= 999) {
                string hundreds = "";
                switch (num / 100) {
                    case 1:
                        hundreds = "One hundred ";
                        break;
                    case 2:
                        hundreds = "Two hundred ";
                        break;
                    case 3:
                        hundreds = "Three hundred ";
                        break;
                    case 4:
                        hundreds = "Four hundred ";
                        break;
                    case 5:
                        hundreds = "Five hundred ";
                        break;
                    case 6:
                        hundreds = "Six hundred ";
                        break;
                    case 7:
                        hundreds = "Seven hundred ";
                        break;
                    case 8:
                        hundreds = "Eight hundred ";
                        break;
                    case 9:
                        hundreds = "Nine hundred ";
                }
                string rest = "";
                if (num % 100 < 20) {
                    switch (num % 100) {
                        case 1:
                            rest = "One";
                            break;
                        case 2:
                            rest = "Two";
                            break;
                        case 3:
                            rest = "Three";
                            break;
                        case 4:
                            rest = "Four";
                            break;
                        case 5:
                            rest = "Five";
                            break;
                        case 6:
                            rest = "Six";
                            break;
                        case 7:
                            rest = "Seven";
                            break;
                        case 8:
                            rest = "Eight";
                            break;
                        case 9:
                            rest = "Nine";
                            break;
                        case 10:
                            rest = "Ten";
                            break;
                        case 11:
                            rest = "Eleven";
                            break;
                        case 12:
                            rest = "Twelve";
                            break;
                        case 13:
                            rest = "Thirteen";
                            break;
                        case 14:
                            rest = "Fourteen";
                            break;
                        case 15:
                            rest = "Fifteen";
                            break;
                        case 16:
                            rest = "Sixteen";
                            break;
                        case 17:
                            rest = "Seventeen";
                            break;
                        case 18:
                            rest = "Eighteen";
                            break;
                        case 19:
                            rest = "Nineteen";
                            break;
                    }
                } else if (num % 100 >= 20 && num % 100 <= 99) {
                    switch (num % 100 / 10) {
                        case 2:
                            rest = "Twenty-";
                            break;
                        case 3:
                            rest = "Thirty-";
                            break;
                        case 4:
                            rest = "Forty-";
                            break;
                        case 5:
                            rest = "Fifty-";
                            break;
                        case 6:
                            rest = "Sixty-";
                            break;
                        case 7:
                            rest = "Seventy-";
                            break;
                        case 8:
                            rest = "Eighty-";
                            break;
                        case 9:
                            rest = "Ninety-";
                    }
                    if (num % 100 % 10 != 0) {
                        rest += to_string(num % 10);
                    } else {
                        rest += "";
                    }
                }
                temp = hundreds + rest;
            }

            result.push_back(temp);
        }
    }
    
    return result;
}