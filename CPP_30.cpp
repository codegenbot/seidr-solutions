[PYTHON]
def issame(a, b):
    return a == b

def get_positive(my_list):
    return [i for i in my_list if i > 0]

@test
def test_issame():
    l1 = [1, 2, 3, -4, 5]
    l2 = [1, 2, 3, 4, 5]
    assert issame(get_positive(l1), get_positive(l2)) == True

@test
def test_get_positive():
    my_list = [-1, -2, -3, -4, -5]
    assert get_positive(my_list) == []

if __name__ == "__main__":
    test_issame()
    test_get_positive()
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
```