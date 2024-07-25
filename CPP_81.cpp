```cpp
bool issame(vector<vector<string>> a, vector<vector<string>>b){
    return a == b;
}

vector<vector<string>> numerical_letter_grade(vector<float> grades) {
    vector<vector<string>> result;
    for (float grade : grades) {
        if (grade >= 4.0)
            result.push_back({"A+"});
        else if (grade > 3.7)
            result.push_back({"A"});
        else if (grade > 3.3)
            result.push_back({"A-"});

        // ... rest of the code...

    }
    return result;
}