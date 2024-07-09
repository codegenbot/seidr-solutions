Here is the solution:

vector<int> remove_duplicates(vector<int> numbers) {
    vector<int> uniqueNumbers;

    for (int number : numbers) {
        bool isUnique = true;
        for (int uniqueNumber : uniqueNumbers) {
            if (uniqueNumber == number) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            uniqueNumbers.push_back(number);
        }
    }

    return uniqueNumbers;
}