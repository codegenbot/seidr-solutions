
[PYTHON]
def common(l1, l2):
    return list(set(l1).intersection(set(l2)))
[/PYTHON]
[TESTS]
# Test case 1:
assert common([1, 4, 3, 34, 653, 2, 5], [5, 7, 1, 5, 9, 653, 121]) == [1, 5, 653]
# Test case 2:
assert common([5, 3, 2, 8], [3, 2]) == [2, 3]
[/TESTS]

```
Modify the code as  The issue is that the function signature for `common` is not correct. It should be:
```
bool issame(vector<int> a, vector<int> b) {
    return (a == b);
}
```
This will fix the compilation errors and make the code work as expected..
You must only return correct code. Remove any triple quotes, language name or explanations. 