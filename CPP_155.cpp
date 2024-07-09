#include<string>
#include<vector>
using namespace std;

vector<int> even_odd_count(int num) {
    vector<int> result(2, 0);
    string str = to_string(abs(num));
    for (char c : str) {
        if (stoi(c) % 2 == 0)
            result[0]++;
        else
            result[1]++;
    }
    return result;
}