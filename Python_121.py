```
def solution(lst):
    return sum([i for i in lst if i % 2 != 0])

lst = [int(x) for x in input("Enter a list of numbers separated by space: ").split()]
print(solution(lst))