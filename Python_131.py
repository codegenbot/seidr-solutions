```
def check():
    n = input("Enter your number: ")
    count = 0
    for digit in str(n):
        if int(digit) % 2 == 0:
            count += 1
    return count

print(check())