```
def fizz_buzz():
    n = int(input("Enter a number: "))
    count = 0
    for i in range(n):
        if i % 11 == 0 or i % 13 == 0:
            str_i = str(i)
            count += str_i.count('7')
    return count

print(fizz_buzz())