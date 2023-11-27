#include <vector>
#include <list>
#include <iostream>
#include <type_traits>

using namespace std;

vector<int> filter_integers(list<int> values) {
    vector<int> result;
    for(auto value : values) {
        if(std::is_same<decltype(value), int>::value){
            result.push_back(static_cast<int>(value));
        }
    }
    return result;
}

int main() {
    auto filtered = filter_integers({3, 'c', 3, 3, 'a', 'b'});
    bool result = issame(filtered, {3, 3, 3});
    cout << "Result: " << result << endl;
    return 0;
}