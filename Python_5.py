def intersperse(numbers, delimiter):
    result = []
    for num in numbers:
        result.extend([num, delimiter])
    result.pop()
    return result

input_numbers = list(map(int, input().split()))
delimiter = input()

output = intersperse(input_numbers, delimiter)

print(output)