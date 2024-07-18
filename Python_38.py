s = input("Enter the string: ").strip()
s = s + '_' * ((3 - len(s) % 3) % 3)
groups = [s[i:i + 3] for i in range(0, len(s), 3)]
groups = [group[-1] + group[:-1] for group in groups]
print("".join(groups))