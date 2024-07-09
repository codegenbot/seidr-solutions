Here is the solution:

int next_smallest(vector<int> lst){
    if (lst.empty()) return 0; // Return None
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    int first_smallest = *sorted.begin();
    auto it = std::find_if(sorted.begin(), sorted.end(), [&](int x) { return x > first_smallest; });
    if (it == sorted.end()) return 0; // Return None
    return *(it - 1);