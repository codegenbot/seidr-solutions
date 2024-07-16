```
def solution(lst):
    return sum(i for i in lst[1::2] if i % 2 == 1)

numbers = input("Enter 'Enter' and then numbers separated by space: ").split()
lst = [int(x) for x in numbers[1:]]

print(solution(lst))