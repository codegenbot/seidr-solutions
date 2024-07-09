using namespace std;

string sort_numbers(string numbers) {
    map<string, int> num_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                 {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                 {"eight", 8}, {"nine", 9}};
    vector<string> num_vector;
    string temp;
    for (char c : numbers) {
        if (!isdigit(c)) temp += c;
        else if (!temp.empty()) {
            num_vector.push_back(temp);
            temp = "";
        }
    }
    num_vector.push_back(temp);
    sort(num_vector.begin(), num_vector.end());
    string result;
    for (string s : num_vector) {
        result += s + " ";
    }
    return result;
}