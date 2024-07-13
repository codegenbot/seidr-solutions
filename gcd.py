def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)


def find_indices(text, target):
    indices = []
    start = 0
    while True:
        pos = text.find(target, start)
        if pos == -1:
            break
        indices.append(pos)
        start = pos + 1
    return indices


while True:
    print("Choose a task: 1 for GCD or 2 for Indices of Substring")
    choice = int(input())

    if choice == 1:
        a = int(input("Enter first number: "))
        b = int(input("Enter second number: "))
        print(gcd(a, b))
    elif choice == 2:
        text = input("Enter the text string: ")
        target = input("Enter the target string: ")
        print(find_indices(text, target))
    else:
        print("Invalid choice. Please try again.")