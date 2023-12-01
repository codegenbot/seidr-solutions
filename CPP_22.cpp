#include <vector>
#include <list>
#include <boost/any.hpp>
#include <iostream>

using namespace std;

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (auto& value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(boost::any_cast<int&>(value));
        }
    }
    return result;
}

int main() {
    list<boost::any> values;
    // Read input from user and add to the values list

    // Example: Read 5 integers from the user
    int num;
    for (int i = 0; i < 5; ++i) {
        cout << "Enter an integer: ";
        cin >> num;
        values.push_back(num);
    }

    // Call the filter_integers function
    vector<int> result = filter_integers(values);

    // Print the result
    cout << "Filtered integers: ";
    for (const auto& num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}