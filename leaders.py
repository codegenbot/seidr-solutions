def find_leaders(numbers):
    leaders = []
    for i in range(len(numbers)):
        if i == len(numbers) - 1 or numbers[i] >= max(numbers[i+1:]):
            leaders.append(numbers[i])
    return leaders

# Read input from user
n = int(input())
numbers = []
for _ in range(n):
    numbers.append(int(input()))

# Find leaders
result = find_leaders(numbers)

# Print output
for num in result:
    print(num)