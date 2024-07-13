Here is the solution:

def leaders(input):
    return [x for x in reversed(input) if all(x >= y for y in input[input.index(x)+1:])]

# test cases
print(leaders([0]))
print(leaders([1, 0]))
print(leaders([1, 451]))
print(leaders([2, 1000, 0]))
print(leaders([2, 0, 1000]))