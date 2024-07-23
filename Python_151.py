def double_the_difference(input_list):
    if len(set(map(int, input_list))) != len(input_list):
        return "Lists must not contain duplicate elements"
    differences = [(int(a) - int(b)) ** 2 for a, b in zip(map(str, input_list)[::2], map(str, input_list)[1::2])]
    return sum(differences) * 8

result = double_the_difference(input_list)
check(result)