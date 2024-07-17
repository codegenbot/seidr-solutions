Here is the Python solution for the problem:

def leaders(input):
    return [i for i in reversed(input) if all(j <= i for j in input[input.index(i)+1:])]

# test cases
print(leaders([0]))
print(leaders([1, 0]))
print(leaders([1, 451]))
print(leaders([2, 1000, 0]))
print(leaders([2, 0, 1000]))