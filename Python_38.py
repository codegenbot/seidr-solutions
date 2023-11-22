def decode_cyclic():
    n = int(input())
    for _ in range(n):
        s = input()
        groups = [s[i:i+3] for i in range(0, len(s), 3)]
        groups = [(group[-1] + group[:-1]) if len(group) == 3 else group for group in groups]
        print("".join(groups))

decode_cyclic()