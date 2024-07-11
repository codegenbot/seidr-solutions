map<string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};

for (auto &it : numMap){
    while (numbers.find(it.first) != string::npos) {
        numbers.replace(numbers.find(it.first), it.first.length(), to_string(it.second));
    }
}

sort(numbers.begin(), numbers.end());

for (auto &it : numMap) {
    while (numbers.find(to_string(it.second)) != string::npos) {
        numbers.replace(numbers.find(to_string(it.second)), to_string(it.second).length(), it.first);
    }
}

return numbers;
}