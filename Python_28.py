n = int(input("Enter the number of strings: "))
strings = [input("Enter a string: ") for _ in range(n)]

def concatenate(strings):
    return ''.join(strings)

result = concatenate(strings)

print(result)