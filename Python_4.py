def solve_problem(numbers):
    # your code here
    return sum(numbers)

numbers = input().split()
numbers = [int(num) for num in numbers]
result = solve_problem(numbers)
print(result)