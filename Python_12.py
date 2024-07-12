```
m = [[0] * (1 + len(input("Enter the second string: "))) for _ in range(1 + len(input("Enter the first string: ")))]
longest, x_longest = 0, 0
for x in range(1, len(input("Enter the first string: ")) + 1):
    for y in range(1, len(input("Enter the second string: ")) + 1):
        if input("Enter the first string: ")[x - 1] == input("Enter the second string: ")[y - 1]:
            m[x][y] = m[x - 1][y - 1] + 1
            if m[x][y] > longest:
                longest = m[x][y]
                x_longest = x
return input("Enter the first string: ")[x_longest - longest - 1: x_longest]

print(f"The longest common substring is: {longest_common_substring(input('Enter the first string: '), input('Enter the second string: '))}")