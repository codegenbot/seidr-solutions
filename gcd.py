```
def gcd(a, b):
    while True:
        try:
            a = int(input("Enter the first number: "))
            b = int(input("Enter the second number: "))
            if a < 0 or b < 0:
                print("Please enter non-negative integers.")
                continue
            while b != 0:
                a, b = b, a % b
            return abs(a)
        except ValueError:
            print("Invalid input. Please enter valid integers.")

def indices_of_substring(text, target):
    indices = []
    current_index = 0
    while True:
        try:
            pos = text.find(target, current_index)
            if pos == -1:
                break
            indices.append(pos)
            current_index = pos + 1
        except AttributeError:
            print("Invalid input. Please enter valid strings.")
            return []
    return indices

a = gcd(0, 0) 
text = input()
target = input()

print(indices_of_substring(text, target))