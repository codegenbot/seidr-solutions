def double_the_difference(lst):
    if len(set(map(int, lst))) != len(lst):
        return "Lists must not contain duplicate elements"
    differences = [(int(a) - int(b)) ** 2 for a, b in zip(map(str, lst)[::2], map(str, lst)[1::2])]
    return sum(differences) * 8