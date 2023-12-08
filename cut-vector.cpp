[PYTHON]
def cut_vector(vec):
    n = len(vec)
    if n == 0:
        return []
    left = []
    right = []
    for i in range(n//2):
        left.append(vec[i])
        right.append(vec[n-i-1])
    diff = float('inf')
    index = -1
    for i in range(n//2):
        if left[i] == right[n-i-1]:
            return [left, right]
        elif diff > abs(left[i] - right[n-i-1]):
            diff = abs(left[i] - right[n-i-1])
            index = i
    if index != -1:
        left.append(vec[index+1])
        right.insert(0, vec[n-index-2])
    return [left, right]
[/PYTHON]
[TESTS]
# Test case 1:
assert cut_vector([1, 0]) == [[1], [0]]
# Test case 2:
assert cut_vector([1, 10]) == [[1], [10]]
# Test case 3:
assert cut_vector([1, 100]) == [[1], [100]]
# Test case 4:
assert cut_vector([1, 1000]) == [[1], [1000]]
# Test case 5:
assert cut_vector([1, 10000]) == [[1], [10000]]
[/TESTS]
