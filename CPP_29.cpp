bool is_same(vector<string> a, vector<string> b);

vector<string> filter_by_prefix(vector<string> strings, string prefix);

assert(is_same(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));