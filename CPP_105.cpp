[PYTHON]
def issame(a: str, b: str) -> bool:
    return a == b

def by_length(a: str, b: str) -> int:
    return len(a) - len(b)

my_list = ["apple", "banana", "orange"]
my_list.sort(key=issame)
print("Sorted list: ", my_list)
my_list.sort(key=by_length)
print("Sorted list by length: ", my_list)
[/PYTHON]
[TESTS]
# Test case 1:
def test_issame():
    assert issame("apple", "banana") == False
    assert issame("orange", "orange") == True

# Test case 2:
def test_by_length():
    assert by_length("apple", "banana") == -1
    assert by_length("orange", "orange") == 0
[/TESTS]
