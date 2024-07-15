def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)


first_num = int(input())
second_num = int(input())

print(gcd(first_num, second_num))