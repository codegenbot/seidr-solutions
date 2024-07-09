def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    result = []
    start = 0
    while True:
        pos = text.find(target, start)
        if pos == -1:
            break
        result.append(pos + 1)
        start = pos + 1
    return result


num_problems = int(input())
for _ in range(num_problems):
    if _ == 0: 
        a = int(input("Enter the first number: "))
        b = int(input("Enter the second number: "))
        print(gcd(a, b))
    else:
        text = input("Enter the text string: ")
        target = input("Enter the target string: ")
        print(indices_of_substring(text, target))