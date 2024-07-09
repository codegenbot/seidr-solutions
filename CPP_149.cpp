```cpp
#include <vector>
#include <algorithm>
#include <initializer_list>

bool issame(vector<string>, vector<string>);

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;

    // Remove strings with odd lengths
    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }

    // Sort the resulted vector by length and then alphabetically
    std::sort(result.begin(), result.end(),
              [](const string& a, const string& b) {
                  if (a.length() != b.length()) {
                      return a.length() < b.length();
                  } else {
                      return a < b;
                  }
              });

    return result;
}

bool issame(vector<string>, vector<string>) {
    // Define the function body here
}