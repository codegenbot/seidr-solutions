[PYTHON]
def get_subvectors(v):
    n = len(v)
    if n == 1:
        return v, v
    
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
assert get_subvectors([1, 0]) == ([1], [0])
# Test case 2:
assert get_subvectors([1, 10]) == ([1], [10])
# Test case 3:
assert get_subvectors([1, 100]) == ([1], [100])
# Test case 4:
assert get_subvectors([1, 1000]) == ([1], [1000])
# Test case 5:
assert get_subvectors([1, 10000]) == ([1], [10000])
[/TESTS]
