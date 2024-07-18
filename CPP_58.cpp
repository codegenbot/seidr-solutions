sort(l1.begin(), l1.end());
sort(l2.begin(), l2.end());
vector<int> common_elements;
set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(common_elements));
common_elements.erase(unique(common_elements.begin(), common_elements.end()), common_elements.end());
return common_elements;
}