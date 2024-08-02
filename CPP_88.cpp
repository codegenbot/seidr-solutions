vector<int> sort_array(vector<int> array){
    int first = array.empty() ? 0 : array[0];
    int last = array.empty() ? 0 : array.back();
    if ((first + last) % 2 == 1)
        return vector<int>(array);
    else
        return vector<int>(array.rbegin(), array.rend());
}