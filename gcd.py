```
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
        result.append(pos)
        start = pos + 1
    return result

if __name__ == "__main__":
    a = int(input("Enter the first integer: "))
    b = int(input("Enter the second integer: "))
    print(gcd(a, b))
    
    text = input("Enter the text: ")
    target = input("Enter the target string: ")
    indices = indices_of_substring(text, target)
    print(indices)