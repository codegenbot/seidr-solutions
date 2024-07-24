```
while True:
    s = input()
    n = int(input())
    pattern = r"(\d+)\s*(apples|oranges)"

    if not re.search(pattern, s.lower()):
        continue

    break

total_apples_oranges = 0
for _ in range(n):
    quantity = int(input())
    total_apples_oranges += quantity

print(total_apples_oranges)