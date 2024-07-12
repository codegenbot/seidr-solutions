string1, string2 = input().strip().split()
print(max(string1, string2, key=len))