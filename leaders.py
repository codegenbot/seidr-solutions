Here is the solution:

def leaders(input_list):
    return [x for x in input_list[::-1] if all(x >= y for y in input_list[input_list.index(x) + 1:][::-1])]

input_list = list(map(int, input().split()))
print(' '.join(str(i) for i in leaders(input_list)))