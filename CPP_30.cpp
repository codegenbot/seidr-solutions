[PYTHON]
def issame(a: std::vector<float>, b: std::vector<float>) -> bool:
    assert(a.size() == b.size())
    for i in range(a.size()):
        if a[i] != b[i]:
            return False
    return True

def main():
    l1 = [1, 2, 3]
    l2 = [4, 5, 6]
    assert(issame(l1, l2))

if __name__ == "__main__":
    main()
[/PYTHON]
[TESTS]
# Test case 1:
l1 = [1, 2, 3]
l2 = [4, 5, 6]
assert(issame(l1, l2))
# Test case 2:
l1 = [-1, -2, -3]
l2 = [1, 2, 3]
assert(not issame(l1, l2))
# Test case 3:
l1 = [1, 2, 3]
l2 = [4, 5, 6, 7]
assert(not issame(l1, l2))
[/TESTS]
