#include <vector>
#include <algorithm>
using namespace std;

vector<int> common(vector<int> l1, vector<int> v2) {
    set<int> result(l1.begin(), l1.end());  
    set<int> s2(v2.begin(), v2.end());

    set<int> result_vector;  
    result_vector = set_intersection(result.begin(), result.end(), s2.begin(), s2.end(),
        inserter(result_vector, result_vector.begin()));
    vector<int> answer(result_vector.begin(), result_vector.end());
    return answer;
}