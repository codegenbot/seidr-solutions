def solution(lst):
    return sum(i for i in lst[1::2] if i % 2 != 0)

user_input = input("Enter a list of numbers separated by spaces: ")
user_list = [int(x) for x in user_input.split()]

print(solution(user_list))