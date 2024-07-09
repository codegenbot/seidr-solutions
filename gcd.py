def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i : i + len(target)] == target:
            result.append(i)
    return result


while True:
    try:
        num1 = int(input("Enter the first integer: "))
        num2 = int(input("Enter the second integer: "))
        text = input("Enter the text string: ")
        target = input("Enter the target string: ")

        print(gcd(num1, num2))
        print(indices_of_substring(text, target))

        break
    except ValueError:
        print(
            "Invalid input. Please enter integers for numbers and strings for text and target."
        )