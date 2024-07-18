def decode_cyclic(s: str):
    s = input()  # Add this line to receive input from the user
    groups = [s[(3 * i):min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    groups = [(group[-1] + group[:-1]) if len(group) == 3 else group for group in groups]
    return "".join(groups)

result = decode_cyclic(input())
print(result)