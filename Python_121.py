def solution(lst):
    return sum(x for x in lst[1::2] if x % 2 != 0)

lst = input("Enter space-separated integers: ").split()

lst = [int(i) for i in lst]

print(solution(lst))