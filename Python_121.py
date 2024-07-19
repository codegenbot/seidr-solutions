def solution(lst):
    return sum(int(d) for d in "".join(map(str, lst)) if int(d) % 2 != 0)

print(check([1, 3, 5]))