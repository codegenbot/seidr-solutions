Here is the solution:

vector<int> sort_array(vector<int> array){
    if(array.empty()) return array;
    int sum = array[0] + array[array.size()-1];
    bool isOdd = (sum % 2 != 0);
    vector<int> result = array;
    if(isOdd) std::sort(result.begin(), result.end());
    else std::sort(result.begin(), result.end(), std::greater<int>);
    return result;