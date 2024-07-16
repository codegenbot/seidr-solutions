def solution(lst):
    return sum(i for i in lst[1::2] if i % 2 == 1)

lst = list(map(int, input("Enter numbers separated by space: ").split()))
print(solution(lst))