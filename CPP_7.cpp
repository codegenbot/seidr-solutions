#include <vector>
vector<string> filter_by_substring(vector<string> strings, string substring);

bool issame(const vector<string>& v1, const vector<string>& v2){
    return v1 == v2;
}

int main(){
    vector<string> strings = {"apple", "banana", "cherry", "date"};
    string substring = "an";

    vector<string> filtered_strings = filter_by_substring(strings, substring);

    for (const auto& str : filtered_strings) {
        cout << str << " ";
    }

    return 0;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(substring) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}