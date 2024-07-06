```
def check(count_up_to):
    total = 0
    for i in range(1, count_up_to + 1):
        if i % 3 == 0 and i % 5 == 0:
            total += i
    return total

print(check(int(input("Enter a number: "))))