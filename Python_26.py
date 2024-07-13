def check(numbers):
    seen = set()
    return [num for num in numbers if not (num in seen or seen.add(num)) and True][::-1]

input_numbers = list(map(int, input().split()))
print(check(input_numbers))