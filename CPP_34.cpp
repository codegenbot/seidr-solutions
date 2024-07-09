Here is the solution:

vector<int> unique(vector<int> l){
    vector<int> result(l.begin(), unique(l.begin(), l.end()).end());
    return result;
}

Note: The `unique` function in C++ already exists and returns a new range that includes only the first element from each group of consecutive equal elements. So, we are using this built-in function to remove duplicates from the vector.