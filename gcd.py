```
def find_gcd(a, b):
    if a <= 0 and b <= 0:
        return 1
    while b != 0:
        a, b = b, a % b
    return abs(a)

num1 = int(input("Enter the first number: "))
num2 = int(input("Enter the second number: "))

gcd_value = find_gcd(num1, num2)
print(f"The GCD of {num1} and {num2} is {gcd_value}")

def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            start_index = i
            while True:
                if text[start_index:start_index+len(target)] == target:
                    result.append(start_index)
                    start_index += len(target)
                else:
                    break
    return result

text = input("Enter the text: ")
target = input("Enter the target string: ")

print(indices_of_substring(text, target))