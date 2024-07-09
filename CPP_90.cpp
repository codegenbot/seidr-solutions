Here is the solution:

vector<int> result = {None};
if (lst.size() < 2) {
    return None;
}
sort(lst.begin(), lst.end());
for (int i = 1; i < lst.size(); i++) {
    if (lst[i] != lst[0]) {
        result.push_back(lst[i]);
        break;
    }
}
return result.empty() ? None : result[0];