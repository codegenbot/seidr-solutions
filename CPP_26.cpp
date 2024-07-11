vector<int> remove_duplicates(vector<int> numbers){
    vector<int> result;
    for(int num : numbers) {
        if(find(result.begin(), result.end(), num) == result.end()) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert(remove_duplicates({1, 2, 3, 2, 4, 3, 5}) == vector<int>{1, 2, 3, 4, 5});
    return 0;
}