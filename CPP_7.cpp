#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    vector<string> strings = {"cat", "dog", "bird", "fish"};
    string substring = "og";
    vector<string> result = filter_by_substring(strings, substring);

    if (issame(result, strings)) {
        cout << "The result is the same as the input." << endl;
    } else {
        cout << "The result is different from the input." << endl;
    }

    return 0;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for (const auto& str : strings) {
        if(str.find(substring) != string::npos)
            result.push_back(str);
    }
    return result;
}