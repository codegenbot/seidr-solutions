Here is the completed code:

vector<int> sort_array(vector<int> array){
    if(array.empty()) return array;

    int sum = array[0] + array.back();
    bool odd = (sum & 1);

    vector<int> result = array;
    if(odd) std::sort(result.begin(), result.end());
    else std::sort(result.begin(), result.end(), std::greater<int>());

    return result;
}