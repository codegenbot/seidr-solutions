map<string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                          {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                          {"eight", 8}, {"nine", 9}};

vector<string> numVec;
string temp;

for (char c : numbers) {
    if (c == ' ') {
        continue;
    }
    for (auto it = numMap.begin(); it != numMap.end(); ++it) {
        if (it->first.find(std::to_string(c)) != string::npos) {
            temp = it->first;
            break;
        }
    }
    numVec.push_back(temp);
}

sort(numVec.begin(), numVec.end());

string result = "";
for (auto str : numVec) {
    result += str + " ";
}
return result.substr(0, result.size() - 1);