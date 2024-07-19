```cpp
bool checkEqual(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> uniqueNumbers(vector<int> numbers) {
    vector<int> result;
    for(int num : numbers){
        if(find(result.begin(), result.end(), num) == result.end()){
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    vector<int> test = {1, 2, 3, 2, 4, 3, 5};
    assert (checkEqual(uniqueNumbers(test) , vector<int>{1, 2, 3, 4, 5}) );
    return 0;
}