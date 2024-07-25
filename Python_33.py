```
def sort_third(lst):
    result = []
    while len(lst) > 0:
        lst = [[x, y, z] for x, y, z in zip(*[iter(map(int, input().split(','))) for _ in range(3)])]
        temp = [i[2] for i in sorted(lst)]
        del lst[:]
        result.append(temp)
    return tuple(result)