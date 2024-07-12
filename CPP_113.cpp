int main(){
    vector<string> expected_result {
        "the number of odd elements 1 in the string 271 of the input.",
        "the number of odd elements 2 in the string 137 of the input.",
        "the number of odd elements 2 in the string 314 of the input."
    };
    vector<string> result = odd_count({"271", "137", "314"});
    assert(result == expected_result);
    cout << "Test passed successfully!" << endl;
    return 0;
}