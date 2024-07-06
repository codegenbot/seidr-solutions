
# You are given a list of integers lst and a target sum. Your task is to find all combinations of two numbers in lst that add up to the target sum.
def double_the_difference(lst):
    result = []
    for i in range(len(lst)):
        for j in range(i+1, len(lst)):
            if lst[i] + lst[j] == 2:
                result.append((lst[i], lst[j]))
    return result

# Test case 1:
assert double_the_difference([1, 2, 3, 4, 5]) == [(1, 2), (2, 3), (3, 4), (4, 5)]

# Test case 2:
assert double_the_difference([1, 2, 3, 4, 5, 6]) == [(1, 2), (2, 3), (3, 4), (4, 5), (5, 6)]

# Test case 3:
assert double_the_difference([1, 2, 3, 4, 5, 6, 7]) == [(1, 2), (2, 3), (3, 4), (4, 5), (5, 6), (6, 7)]