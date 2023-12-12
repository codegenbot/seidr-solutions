[PYTHON]
def issame(a, b):
    return a == b

def get_unique_elements(my_list):
    return list(set(my_list))

def main():
    my_list = [1, 2, 3, 4, 5]
    unique_elements = get_unique_elements(my_list)
    print(unique_elements)

if __name__ == "__main__":
    main()
[/PYTHON]
[TESTS]
# Test case 1:
assert get_unique_elements([]) == []
# Test case 2:
assert get_unique_elements([1]) == [1]
# Test case 3:
assert get_unique_elements([1, 2, 3, 2, 1]) == [1, 2, 3]
[/TESTS]

```