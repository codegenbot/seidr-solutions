#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if(a.size() != b.size())
        return false;

    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }

    return true;
}

std::vector<string> by_length(vector<int> arr) {
    vector<string> numbers;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            numbers.push_back(to_string(num));
        }
    }

    sort(numbers.begin(), numbers.end());
    reverse(numbers.begin(), numbers.end());

    vector<string> result;
    for (string str : numbers) {
        string temp = "";
        switch (stoi(str)) {
            case 1: temp = "One"; break;
            case 2: temp = "Two"; break;
            case 3: temp = "Three"; break;
            case 4: temp = "Four"; break;
            case 5: temp = "Five"; break;
            case 6: temp = "Six"; break;
            case 7: temp = "Seven"; break;
            case 8: temp = "Eight"; break;
            case 9: temp = "Nine";
        }
        result.push_back(temp);
    }

    return result;
}