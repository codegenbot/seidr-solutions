sort(l1.begin(), l1.end());
sort(l2.begin(), l2.end());

vector<int> result;
set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(result));

auto last = unique(result.begin(), result.end());
result.erase(last, result.end());

return result;
}