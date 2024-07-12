```
def decode_cyclic():
    s = input("Enter a string: ")
    result = []
    for char in s[:3]:
        result.extend([char] * 3)
    if len(s) % 3 == 1:
        result.append(s[-1])
    elif len(s) % 3 == 2:
        result.extend(list(s[-2:-1]))
    print("".join(result))

decode_cyclic()