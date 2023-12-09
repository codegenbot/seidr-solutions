[PYTHON]
def get_positive(my_list):
    return list(filter(lambda x: x > 0, my_list))

assert get_positive([]) == []
assert get_positive([1, 2, 3]) == [1, 2, 3]
assert get_positive([-1, -2, -3]) == []
[/PYTHON]
[TESTS]
# Test case 1:
l1 = [1, 2, 3, -4, 5]
l2 = [1, 2, 3, 4, 5]
assert get_positive(l1) == [1, 2, 3, 5]
# Test case 2:
l1 = [-1, -2, -3, -4, -5]
l2 = [1, 2, 3, 4, 5]
assert get_positive(l1) == []
# Test case 3:
l1 = [1, 2, 3, -4, 5]
l2 = [1, 2, 3, 4, 5]
assert issame(get_positive(l1), get_positive(l2)) == True
# Test case 4:
l1 = [-1, -2, -3, -4, -5]
l2 = [1, 2, 3, 4, 5]
assert issame(get_positive(l1), get_positive(l2)) == False
[/TESTS]

You have a syntax error in the `issame` function. The correct signature for this function should be:
```
def issame(a, b):
    return a == b
```
This will fix the syntax error and allow you to compare two lists for equality..
You must only return correct code. Remove any triple quotes, language name or explanations.