n = int(input())
strings = [input() for _ in range(n)]


def concatenate(strings):
    return "".join(strings)


result = concatenate(strings)

if len(strings) == n:
    print(result)
else:
    print("Expected input is not provided. Please provide the correct input format.")