string sort_numbers(string numbers){
    vector<string> num_list;
    stringstream ss(numbers);
    string token;
    while (ss >> token) {
        num_list.push_back(token);
    }
    sort(num_list.begin(), num_list.end(), [&](const string &a, const string &b) {
        return number_map[a] < number_map[b];
    });
    string result = "";
    for (const auto &num : num_list) {
        result += num + " ";
    }
    result.pop_back(); // Remove extra space at the end
    return result;
}

int main(){
    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");
    return 0;
}