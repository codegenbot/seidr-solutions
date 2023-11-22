def sort_third(l: list):
    return sorted(l, key=lambda x: x[2] if len(x) >= 3 else float('inf'))

# Update the test case
assert sort_third([[5, 6, 3], [4, 8, 9], [2, 1]]) == [[2, 1], [5, 6, 3], [4, 8, 9]]