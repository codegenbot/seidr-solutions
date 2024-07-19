#include <string>

bool are_same(int a, int b) {
    return a == b;
}

vector<string> by_length(vector<int> arr);

int main() {
    vector<int> numbers = {3, 9, 2, 5, 1, 7, 4, 9, 6, 8};
    vector<string> result = by_length(numbers);

    for (const string& str : result) {
        cout << str << " ";
    }

    return 0;
}

vector<string> by_length(vector<int> arr){
    vector<string> result;
    vector<int> filtered_arr;
    map<int, string> num_to_name = {
        {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, 
        {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}
    };

    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            filtered_arr.push_back(num);
        }
    }

    sort(filtered_arr.begin(), filtered_arr.end());

    reverse(filtered_arr.begin(), filtered_arr.end());

    for (int num : filtered_arr) {
        result.push_back(num_to_name[num]);
    }

    return result;
}