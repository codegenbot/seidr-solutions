strings = []
print("Enter the number of strings:")
num_strings = int(input())
print("Enter the strings:")
for _ in range(num_strings):
    strings.append(input().rstrip())

strings.sort()
print("Sorted strings:")
for s in strings:
    print(s)