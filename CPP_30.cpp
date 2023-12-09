[PYTHON]
def issame(a: std::vector<float>, b: std::vector<float>) -> bool:
    if a.size() != b.size():
        return False
    for i in range(a.size()):
        if a[i] != b[i]:
            return False
    return True

def get_positive(my_list: std::vector<float>) -> std::vector<bool>:
    positive_elements = []
    for element in my_list:
        if element > 0.0f:
            positive_elements.append(True)
        else:
            positive_elements.append(False)
    return positive_elements

def main():
    l1 = [1.0f, -2.0f, 3.0f, -4.0f]
    l2 = [1.0f, 2.0f, 3.0f, 4.0f]
    assert(issame(get_positive(l1), get_positive(l2)))

if __name__ == "__main__":
    main()
[/PYTHON]
[TESTS]
# Test case 1:
l1 = [1.0f, -2.0f, 3.0f, -4.0f]
l2 = [1.0f, 2.0f, 3.0f, 4.0f]
assert(issame(get_positive(l1), get_positive(l2)))
# Test case 2:
l1 = [-1.0f, -2.0f, -3.0f, -4.0f]
l2 = [1.0f, 2.0f, 3.0f, 4.0f]
assert(not issame(get_positive(l1), get_positive(l2)))
[/TESTS]
