int main() {
    vector<string> test = {"271", "137", "314"};
    vector<string> expected = {"the number of odd elements 2 in the string 1", 
                               "the number of odd elements 1 in the string 2", 
                               "the number of odd elements 0 in the string 3"};
    vector<string> result = odd_count(test);
    if (issame(result, expected)) {
        cout << "Test passed." << endl;
    } else {
        cout << "Test failed." << endl;
    }
}