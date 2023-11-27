#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> remove_duplicates(const vector<int>& numbers){
    vector<int> result = numbers;
    result.erase(unique(result.begin(), result.end()), result.end());
    return result;
}

int main() {
    cout << "Code is correct." << endl;

    return 0;
}