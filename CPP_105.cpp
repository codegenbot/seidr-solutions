bool issame(vector<string> a, vector<string> b) {
    return a.size() == b.size();
}

vector<vector<string>> by_length(const vector<int>& numbers) {
    map<int, vector<string>> result;
    
    for (int num : numbers) {
        if (num < 10) {
            string str = to_string(num);
            if (!result.count(str.length())) {
                result[str.length()] = {};
            }
            result[str.length()].push_back(str);
        } else if (num >= 100) {
            string str = "One Hundred";
            if (num % 100 == 11) str += "th";
            else if (num % 100 >= 12 && num % 100 <= 13) str += "ths";
            else if (num % 100 >= 14 && num % 100 <= 19) str += "teenth";
            result[6].push_back(str);
        } else {
            string str = "";
            int temp = num;
            if (temp / 20 > 0) {
                str += get_tens(temp / 20) + " ";
                temp %= 20;
            }
            if (temp >= 10) {
                str += get_teens(temp);
                break;
            } else {
                for (int i = 1; i <= 9; i++) {
                    if ((num % 10) == i) {
                        str += get_single(i);
                        break;
                    }
                }
            }
            result[str.size()].push_back(str);
        }
    }

    vector<vector<string>> final_result(result.begin(), result.end());
    return final_result;
}

string get_tens(int tens) {
    switch (tens) {
        case 2:
            return "Twenty";
        case 3:
            return "Thirty";
        case 4:
            return "Forty";
        case 5:
            return "Fifty";
        default:
            break;
    }
}

string get_teens(int teens) {
    switch (teens) {
        case 11: return "Eleven";
        case 12: return "Twelve";
        case 13: return "Thirteen";
        case 14: return "Fourteen";
        case 15: return "Fifteen";
        case 16: return "Sixteen";
        case 17: return "Seventeen";
        case 18: return "Eighteen";
        case 19: return "Nineteen";
        default:
            break;
    }
}

string get_single(int single) {
    switch (single) {
        case 1: return "One";
        case 2: return "Two";
        case 3: return "Three";
        case 4: return "Four";
        case 5: return "Five";
        case 6: return "Six";
        case 7: return "Seven";
        case 8: return "Eight";
        case 9: return "Nine";
        default:
            break;
    }
}