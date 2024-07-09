def solution():
    s = "Enter numbers separated by space: "
    lst = list(map(int, input(s).split()))
    return sum(i for i in lst[1::2] if i % 2 != 0)

print(solution())