#include <algorithm>

string sort_numbers(string numbers) {
    map<string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                {"eight", 8}, {"nine", 9}};
    vector<string> numVec;
    
    string temp;
    for (char& c : numbers) {
        if (!isdigit(c)) {
            temp = "";
            bool found = false;
            while (c != ' ') {
                temp += c;
                c = getchar();
            }
            if (!temp.empty()) {
                numVec.push_back(temp);
                for (auto it = numMap.begin(); it != numMap.end(); ++it) {
                    if (it->first == temp) {
                        found = true;
                        break;
                    }
                }
                if (!found)
                    return "Invalid input";
            }
        }
    }
    
    sort(numVec.begin(), numVec.end());
    string result;
    for (string& s : numVec) {
        result += s + " ";
    }
    return result.substr(0, result.size() - 1);
}