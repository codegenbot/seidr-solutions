[PYTHON]
def issame(a: vector<int>, b: vector<int>) -> bool:
    return len(common(a, b)) == 0

def common(a: vector<int>, b: vector<int>) -> vector<int>:
    return list(set(a).intersection(b))
[/PYTHON]
[TESTS]
# Test case 1:
assert issame([4, 3, 2, 8], []) == True
# Test case 2:
assert issame([5, 7, 1, 5, 9, 653, 121], [5, 7, 1, 5, 9, 653, 121]) == False
[/TESTS]

Note: The `vector<int>` type is used to represent a vector of integers. The `set` function is used to get the unique elements of the intersection of the two vectors.
```