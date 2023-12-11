[PYTHON]
def issame(a, b):
    return a == b

def total_match(a, b):
    # implement the function here
    pass

def main():
    assert(issame(total_match({"this", "is", "a", "test"}, {""}), {}));

if __name__ == "__main__":
    main()
[/PYTHON]
[TESTS]
# Test case 1:
def test_case_1():
    assert issame(total_match({"this", "is", "a", "test"}, {""}), {})

# Test case 2:
def test_case_2():
    assert not issame(total_match({"this", "is", "a", "test"}, {"hello"}), {})

# Test case 3:
def test_case_3():
    assert not issame(total_match({"this", "is", "a", "test"}, {"hello", "world"}), {})
[/TESTS]
