Here is the solution:

def leaders(input_list):
    return [x for i, x in enumerate(reversed(input_list)) if all(x >= y for y in input_list[i+1:])]

# test your function
print(leaders([0]))
print(leaders([1, 0]))
print(leaders([1, 451]))
print(leaders([2, 1000, 0]))
print(leaders([2, 0, 1000]))