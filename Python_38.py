def decode_cyclic(s: list):
    k = len(s) // 2
    return "".join(str(s[(i - k) % len(s)]) for i in range(len(s) if s)

user_input = list(map(int, input().split(',')))
result = decode_cyclic(user_input)
print(result)