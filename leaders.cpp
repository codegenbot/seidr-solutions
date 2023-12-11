[PYTHON]
def leaders(v):
    result = []
    current_leader = float('-inf')
    for i in range(len(v)-1, -1, -1):
        if v[i] >= current_leader:
            result.append(v[i])
            current_leader = v[i]
    return result
[/PYTHON]
[TESTS]
# Test case 1:
v = [1, 451]
assert leaders(v) == [1, 451]
# Test case 2:
v = [0, 1000]
assert leaders(v) == [1000]
# Test case 3:
v = [2, 1000, 0]
assert leaders(v) == [2, 1000]
[/TESTS]
