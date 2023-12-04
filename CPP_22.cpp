
Option 1: Change the function signature to accept a brace-enclosed initializer list:
```
vector<int> filter_integers(std::initializer_list<list_any> values) {
    vector<int> result;
    for (auto& value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(std::get<int>(value));
        }
    }
    return result;
}
```
Option 2: Pass a `list_any` object containing the values instead of a brace-enclosed initializer list:
```
std::vector<list_any> values = {{3, 'c', 3, 3, 'a', 'b'}};
assert(is_same(filter_integers(values), {3, 3, 3}));
```