```
def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

def find_indices(text, target):
    try:
        return [i for i in range(len(text)-len(target)+1) if text[i:i+len(target)] == target]
    except TypeError:
        print("Invalid input. Please enter strings.")
        exit()

if __name__ == "__main__":
    a = int(input())
    b = int(input())

    try:
        print(gcd(a, b))
    except ValueError:
        print("Please enter integers for gcd.")

    text = input()
    target = input()

    try:
        print(find_indices(text, target))
    except AttributeError:
        print("Invalid input. Please enter strings.")