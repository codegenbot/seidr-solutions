```
def decode_cyclic(k: int) -> str:
    while True:
        try:
            s = input(f"Enter the string (group size {k}): ")
            break
        except ValueError:
            print("Invalid input. Please enter a valid string.")
    result = ""
    if len(s) >= k:
        while len(s) >= k:
            group = s[:min(k, len(s))]
            result += group[-1] + group[0]
            for i in range(1, k - 1):
                result += group[i]
            s = s[len(group):]
        if s:
            result += s
    else:
        result = s
    return result

print(decode_cyclic(int(input("Enter the group size: "))))