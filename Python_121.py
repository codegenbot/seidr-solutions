def solution(lst):
    return sum(i for i in lst[1::2] if i % 2 != 0)

numbers = list(map(int, input("Enter numbers separated by space: ").split()))
solution(numbers)