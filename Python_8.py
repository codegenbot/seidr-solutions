n = int(input())
numbers = list(map(int, input().split()))

def count_odd_numbers(numbers):
    return len([num for num in numbers if num % 2 != 0])

result = count_odd_numbers(numbers)
print(result)