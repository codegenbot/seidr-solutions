Here is the solution:

vector<int> result = {lst[0]};

for (int i = 1; i < lst.size(); ++i) {
    if (lst[i] < *max_element(result.begin(), result.end())) {
        result.clear();
        result.push_back(lst[i]);
    } else if (lst[i] > *result.begin()) {
        result.erase(result.begin());
    }
}

if (result.size() == 1)
    return -1;
else
    return *result.begin();