lst = []
for _ in range(2):
    lst.append(int(input()))

total = sum([max(0, (x//3)-2) for x in lst])
print(total)