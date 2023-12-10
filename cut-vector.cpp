[PYTHON]
def get_subvectors(v):
    n = len(v)
    min_diff = float('inf')
    cut_index = -1
    for i in range(n):
        diff = abs(v[i] - v[n-1])
        if diff < min_diff:
            min_diff = diff
            cut_index = i
    subvec1 = v[:cut_index+1]
    subvec2 = v[cut_index+1:]
    return subvec1, subvec2
[/PYTHON]
[TESTS]
# Test case 1:
v = [1, 0]
subvec1, subvec2 = get_subvectors(v)
assert subvec1 == [1]
assert subvec2 == [0]
# Test case 2:
v = [1, 10]
subvec1, subvec2 = get_subvectors(v)
assert subvec1 == [1]
assert subvec2 == [10]
# Test case 3:
v = [1, 100]
subvec1, subvec2 = get_subvectors(v)
assert subvec1 == [1]
assert subvec2 == [100]
# Test case 4:
v = [1, 1000]
subvec1, subvec2 = get_subvectors(v)
assert subvec1 == [1]
assert subvec2 == [1000]
# Test case 5:
v = [1, 10000]
subvec1, subvec2 = get_subvectors(v)
assert subvec1 == [1]
assert subvec2 == [10000]
[/TESTS]
