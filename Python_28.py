def concatenate(strings: List[str]) -> str:
    return ''.join(strings)

input_strings = []
try:
    while True:
        input_strings.append(input())
except EOFError:
    pass

result = concatenate(input_strings)
print(result)