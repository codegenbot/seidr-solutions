#include <any>
#include <vector>
#include <cassert>

using namespace std;
using std::any;

vector<int> filter_integers(const vector<any>& values){
    vector<int> result;
    for (const auto &val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(any_cast<int>(val));
        }
    }
    return result;
}

int main();