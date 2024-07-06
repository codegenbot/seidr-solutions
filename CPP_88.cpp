#include <vector>
#include <initializer_list>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> sort_array(vector<int> array) {
    int size = array.size();
    if (size == 0)
        return array;
    int sum = 0;
    for(int i = 0; i < size; i++)
        sum += array[i];
    if(sum % 2 != 0)
        return vector<int>(array.begin(), array.end());
    else
        return vector<int>(array.rbegin(), array.rend());
}