```
def double_the_difference(lst):
    if len(set(map(int, lst))) != len(lst):
        return str(len(set(map(int, lst)))) + " " + str(len(lst))
    differences = [(int(a) - int(b)) ** 2 for a, b in zip(lst[::2], lst[1::2])]
    return sum(differences) * 8

input_list = [12, 10, 9, 5]
output = double_the_difference(input_list)
print(output)